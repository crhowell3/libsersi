#include "libdis6/utils/IncomingMessage.h"

#include <iostream>

#include "libdis6/common/Pdu.h"
#include "libdis6/entity_information/EntityStatePdu.h"
#include "libdis6/utils/DataStream.h"
#include "libdis6/utils/IPacketProcessor.h"
#include "libdis6/utils/PduBank.h"

namespace dis {
// the DIS specification says the type is known for all PDUs at the 3rd byte of
// the PDU buffer.
const uint32_t kPduTypePosition = 2;

IncomingMessage::IncomingMessage() = default;

IncomingMessage::~IncomingMessage() = default;

void IncomingMessage::Process(const char* buf, uint32_t size, Endian e) {
  if (size < 1) {
    return;
  }

  DataStream ds(buf, size, e);

  while (ds.GetReadPos() < ds.Size()) {
    uint8_t pdu_type = ds[kPduTypePosition];
    SwitchOnType(static_cast<PduType>(pdu_type), ds);
  }
}

void IncomingMessage::SwitchOnType(PduType pdu_type, DataStream& ds) {
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

bool IncomingMessage::AddProcessor(uint8_t id, IPacketProcessor* pp) {
  PacketProcessorContainer::value_type candidate(id, pp);
  PacketProcessorContainer::iterator container_iter;

  // If this id doesn't already have this processor (it shouldn't)
  if (!FindProccessorContainer(id, pp, container_iter)) {
    processors_.insert(candidate);
    return true;
  }

  return false;
}

///\todo add proper support for erasing from a multimap.
///\warning erases any processor registered for the id
bool IncomingMessage::RemoveProcessor(uint8_t id, const IPacketProcessor* pp) {
  PacketProcessorContainer::iterator container_iter;

  if (FindProccessorContainer(id, pp, container_iter)) {
    // Erases only the single pair found in the interator
    processors_.erase(container_iter);
    return true;
  }

  // The pair doesn't exist
  return false;
}

bool IncomingMessage::AddPduBank(uint8_t pdu_type, IPduBank* pduBank) {
  PduBankContainer::value_type candidate(pdu_type, pduBank);
  PduBankContainer::iterator container_iter;

  // If this id doesn't already have this PDU bank (it shouldn't)
  if (!FindPduBankContainer(pdu_type, pduBank, container_iter)) {
    pdu_banks_.insert(candidate);
    return true;
  }

  return false;
}

///\todo add proper support for erasing from a multimap.
///\warning erases any PDU bank registered PDU type
bool IncomingMessage::RemovePduBank(uint8_t pdu_type, const IPduBank* pduBank) {
  PduBankContainer::iterator container_iter;

  if (FindPduBankContainer(pdu_type, pduBank, container_iter)) {
    // Erases only the single pair found in the interator
    pdu_banks_.erase(container_iter);
    return true;
  }

  // The pair doesn't exist
  return false;
}

IncomingMessage::PacketProcessorContainer& IncomingMessage::GetProcessors() {
  return processors_;
}

const IncomingMessage::PacketProcessorContainer&
IncomingMessage::GetProcessors() const {
  return processors_;
}

IncomingMessage::PduBankContainer& IncomingMessage::GetPduBanks() {
  return pdu_banks_;
}

const IncomingMessage::PduBankContainer& IncomingMessage::GetPduBanks() const {
  return pdu_banks_;
}

bool IncomingMessage::FindProccessorContainer(
    uint8_t id, const IPacketProcessor* pp,
    PacketProcessorContainer::iterator& containerIter) {
  PacketProcessIteratorPair iter_pair = processors_.equal_range(id);

  // Check to make sure that the processor we're trying to add is not already
  // there
  while (iter_pair.first != iter_pair.second) {
    // If this processor with a matching id has a the exact same processor, bail
    if ((iter_pair.first)->second == pp) {
      containerIter = iter_pair.first;
      return true;
    }

    iter_pair.first++;
  }

  // No matches were found in the loop
  return false;
}

bool IncomingMessage::FindPduBankContainer(
    uint8_t pdu_type, const IPduBank* pduBank,
    PduBankContainer::iterator& containerIter) {
  PduBankIteratorPair iter_pair = pdu_banks_.equal_range(pdu_type);

  // Check to make sure that the PDU bank we're trying to add is not already
  // there
  while (iter_pair.first != iter_pair.second) {
    // If this PDU bank with a matching id has a the exact same PDU bank, bail
    if ((iter_pair.first)->second == pduBank) {
      containerIter = iter_pair.first;
      return true;
    }

    iter_pair.first++;
  }

  // No matches were found in the loop
  return false;
}
}  // namespace dis
