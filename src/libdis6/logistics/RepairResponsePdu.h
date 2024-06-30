#pragma once

#include "libdis6/common/EntityID.h"
#include "libdis6/logistics/LogisticsFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.5.6. Sent after repair complete PDU. COMPLETE

class RepairResponsePdu final : public LogisticsFamilyPdu {
 private:
  /** Entity that is receiving service */
  EntityID receiving_entity_id_;

  /** Entity that is supplying */
  EntityID repairing_entity_id_;

  /** Result of repair operation */
  uint8_t repair_result_;

  /** padding */
  int16_t padding1_;

  /** padding */
  char padding2_;

 public:
  RepairResponsePdu();
  ~RepairResponsePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  EntityID& GetRepairingEntityId();
  [[nodiscard]] const EntityID& GetRepairingEntityId() const;
  void SetRepairingEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetRepairResult() const;
  void SetRepairResult(uint8_t value);

  [[nodiscard]] int16_t GetPadding1() const;
  void SetPadding1(int16_t value);

  [[nodiscard]] char GetPadding2() const;
  void SetPadding2(char value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const RepairResponsePdu& rhs) const;
};
}  // namespace dis
