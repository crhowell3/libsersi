#pragma once

#include <vector>

#include "libsersi/common/EntityID.h"
#include "libsersi/minefield/MinefieldFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.10.4 proivde the means to request a retransmit of a minefield
// data pdu. COMPLETE

class MinefieldResponseNackPdu final : public MinefieldFamilyPdu {
 private:
  /** Minefield ID */
  EntityID minefield_id_;

  /** entity ID making the request */
  EntityID requesting_entity_id_;

  /** request ID */
  uint8_t request_id_;

  /** how many pdus were missing */
  uint8_t number_of_missing_pdus_;

  /** PDU sequence numbers that were missing */
  std::vector<uint64_t> missing_pdu_sequence_numbers_;

 public:
  MinefieldResponseNackPdu();
  ~MinefieldResponseNackPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetMinefieldId();
  [[nodiscard]] const EntityID& GetMinefieldId() const;
  void SetMinefieldId(const EntityID& value);

  EntityID& GetRequestingEntityId();
  [[nodiscard]] const EntityID& GetRequestingEntityId() const;
  void SetRequestingEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetRequestId() const;
  void SetRequestId(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfMissingPdus() const;

  std::vector<uint64_t>& GetMissingPduSequenceNumbers();
  [[nodiscard]] const std::vector<uint64_t>& GetMissingPduSequenceNumbers()
      const;
  void SetMissingPduSequenceNumbers(const std::vector<uint64_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const MinefieldResponseNackPdu& rhs) const;
};
}  // namespace dis
