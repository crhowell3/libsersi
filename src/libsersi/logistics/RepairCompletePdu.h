#pragma once

#include <cstddef>

#include "libsersi/common/EntityID.h"
#include "libsersi/logistics/LogisticsFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.5.5. Repair is complete. COMPLETE

class RepairCompletePdu final : public LogisticsFamilyPdu {
 private:
  /** Entity that is receiving service */
  EntityID receiving_entity_id_;

  /** Entity that is supplying */
  EntityID repairing_entity_id_;

  /** Enumeration for type of repair */
  uint16_t repair_;

  /** padding, number prevents conflict with superclass ivar name */
  int16_t padding2_;

 public:
  RepairCompletePdu();
  ~RepairCompletePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  EntityID& GetRepairingEntityId();
  [[nodiscard]] const EntityID& GetRepairingEntityId() const;
  void SetRepairingEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetRepair() const;
  void SetRepair(uint16_t value);

  [[nodiscard]] int16_t GetPadding2() const;
  void SetPadding2(int16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const RepairCompletePdu& rhs) const;
};
}  // namespace dis
