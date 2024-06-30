#pragma once

#include "libdis6/common/EntityID.h"
#include "libdis6/common/Pdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.4. abstract superclass for fire and detonation pdus that have
// shared information. COMPLETE

class WarfareFamilyPdu : public Pdu {
 private:
  /** ID of the entity that shot */
  EntityID firing_entity_id_;

  /** ID of the entity that is being shot at */
  EntityID target_entity_id_;

 public:
  WarfareFamilyPdu();
  ~WarfareFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  EntityID& GetFiringEntityId();
  [[nodiscard]] const EntityID& GetFiringEntityId() const;
  void SetFiringEntityId(const EntityID& value);

  EntityID& GetTargetEntityId();
  [[nodiscard]] const EntityID& GetTargetEntityId() const;
  void SetTargetEntityId(const EntityID& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const WarfareFamilyPdu& rhs) const;
};
}  // namespace dis
