#pragma once

#include <cstdint>
#include <map>  // for member

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.hpp"
#include "libsersi/utils/Endian.hpp"            // for internal type
#include "libsersi/utils/IBufferProcessor.hpp"  // for base class
#include "libsersi/utils/IPacketProcessor.hpp"
#include "libsersi/utils/IPduBank.hpp"
#include "libsersi/utils/PduType.hpp"

namespace dis {
class Pdu;
class IPacketProcessor;
class DataStream;

constexpr uint32_t kPduTypePosition = 2;

/// A framework for routing the packet to the correct processor.
class IncomingMessage : public IBufferProcessor {
 public:
  /// the container type for supporting processors.
  using PacketProcessorContainer = std::multimap<uint8_t, IPacketProcessor*>;

  /// the container type for supporting PDU banks.
  using PduBankContainer = std::multimap<uint8_t, IPduBank*>;

  IncomingMessage() = default;
  ~IncomingMessage() override = default;

  void Process(const char* buf, uint32_t size, Endian e) {
    if (size < 1) {
      return;
    }

    DataStream ds(buf, size, e);

    while (ds.GetReadPos() < ds.Size()) {
      uint8_t pdu_type = ds[kPduTypePosition];
      SwitchOnType(static_cast<PduType>(pdu_type), ds);
    }
  }

  /// registers the ipp instance to process packets with the id
  /// @return 'true' if the pair of parameters were not found in the container
  /// and were addded.  'false' if the pair was found.
  bool AddProcessor(uint8_t id, IPacketProcessor* pp) {
    PacketProcessorContainer::value_type candidate(id, pp);
    PacketProcessorContainer::iterator container_iter;

    // If this id doesn't already have this processor (it shouldn't)
    if (!FindProccessorContainer(id, pp, container_iter)) {
      processors_.insert(candidate);
      return true;
    }

    return false;
  }

  /// unregisters the ipp instance for packets with the id.  it does not clean
  /// up the delete the ipp.
  /// @return 'true' if the pair of parameters were found in the container and
  /// removed.  'false' if the pair was not found.
  bool RemoveProcessor(uint8_t id, const IPacketProcessor* pp) {
    PacketProcessorContainer::iterator container_iter;

    if (FindProccessorContainer(id, pp, container_iter)) {
      // Erases only the single pair found in the interator
      processors_.erase(container_iter);
      return true;
    }

    // The pair doesn't exist
    return false;
  }

  /// registers the PDU bank instance to provide the PDU object
  /// @return 'true' if the pair of parameters were not found in the container
  /// and were addded.  'false' if the pair was found.
  bool AddPduBank(uint8_t pdu_type, IPduBank* pduBank) {
    PduBankContainer::value_type candidate(pdu_type, pduBank);
    PduBankContainer::iterator container_iter;

    // If this id doesn't already have this PDU bank (it shouldn't)
    if (!FindPduBankContainer(pdu_type, pduBank, container_iter)) {
      pdu_banks_.insert(candidate);
      return true;
    }

    return false;
  }

  /// unregisters the PDU bank instance
  /// @return 'true' if the pair of parameters were found in the container and
  /// removed.  'false' if the pair was not found.
  bool RemovePduBank(uint8_t pdu_type, const IPduBank* pduBank) {
    PduBankContainer::iterator container_iter;

    if (FindPduBankContainer(pdu_type, pduBank, container_iter)) {
      // Erases only the single pair found in the interator
      pdu_banks_.erase(container_iter);
      return true;
    }

    // The pair doesn't exist
    return false;
  }

  PacketProcessorContainer& GetProcessors() { return processors_; }
  [[nodiscard]] const PacketProcessorContainer& GetProcessors() const {
    return processors_;
  }

  PduBankContainer& GetPduBanks() { return pdu_banks_; }
  [[nodiscard]] const PduBankContainer& GetPduBanks() const {
    return pdu_banks_;
  }

 private:
  using PacketProcessIteratorPair =
      std::pair<PacketProcessorContainer::iterator,
                PacketProcessorContainer::iterator>;
  PacketProcessorContainer processors_;

  using PduBankIteratorPair =
      std::pair<PduBankContainer::iterator, PduBankContainer::iterator>;
  PduBankContainer pdu_banks_;

  void SwitchOnType(PduType pdu_type, DataStream& ds) {
    Pdu* pdu = nullptr;

    PduBankContainer::iterator container_iter;

    // first, check if any custom PDU bank registered
    auto pdu_bank_it = pdu_banks_.find(pdu_type);
    if (pdu_bank_it != pdu_banks_.end()) {
      pdu = pdu_bank_it->second->GetStaticPDU(pdu_type, ds);
    } else {
      pdu = PduBank::GetStaticPDU(pdu_type);
    }

    // if valid pdu point, and at least 1 processor
    if ((pdu != nullptr) && (processors_.count(pdu_type) > 0)) {
      pdu->Unmarshal(ds);

      // assumes the location in the buffer is the packet id.
      typedef std::pair<PacketProcessorContainer::iterator,
                        PacketProcessorContainer::iterator>
          RangePair;
      RangePair rangepair = processors_.equal_range(pdu_type);
      auto processor_iter = rangepair.first;
      auto processor_end = rangepair.second;
      while (processor_iter != processor_end) {
        (processor_iter->second)->Process(*pdu);
        ++processor_iter;
      }
    } else {
      ds.Clear();
    }
  }

  /// Searches the proccesor container multimap for a matching container and
  /// returns the iterator
  bool FindProccessorContainer(
      uint8_t id, const IPacketProcessor* pp,
      PacketProcessorContainer::iterator& container_iter) {
    PacketProcessIteratorPair iter_pair = processors_.equal_range(id);

    // Check to make sure that the processor we're trying to add is not already
    // there
    while (iter_pair.first != iter_pair.second) {
      // If this processor with a matching id has a the exact same processor,
      // bail
      if ((iter_pair.first)->second == pp) {
        container_iter = iter_pair.first;
        return true;
      }

      iter_pair.first++;
    }

    // No matches were found in the loop
    return false;
  }

  /// Searches the PDU bank container multimap for a matching container and
  /// returns the iterator
  bool FindPduBankContainer(uint8_t pdu_type, const IPduBank* pduBank,
                            PduBankContainer::iterator& container_iter) {
    PduBankIteratorPair iter_pair = pdu_banks_.equal_range(pdu_type);

    // Check to make sure that the PDU bank we're trying to add is not already
    // there
    while (iter_pair.first != iter_pair.second) {
      // If this PDU bank with a matching id has a the exact same PDU bank, bail
      if ((iter_pair.first)->second == pduBank) {
        container_iter = iter_pair.first;
        return true;
      }

      iter_pair.first++;
    }

    // No matches were found in the loop
    return false;
  }
};

}  // namespace dis
