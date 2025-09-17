#pragma once

#include "sersi/common/EntityID.hpp"
#include "sersi/common/Pdu.hpp"
#include "sersi/utils/DataStream.hpp"

namespace dis::warfare {
// Section 5.3.4. abstract superclass for fire and detonation pdus that have
// shared information. COMPLETE

class WarfareFamilyPdu : public Pdu {
 private:
  /** ID of the entity that shot */
  EntityID firing_entity_id_;

  /** ID of the entity that is being shot at */
  EntityID target_entity_id_;

 public:
  WarfareFamilyPdu() { SetProtocolFamily(2); }
  ~WarfareFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  {
    Pdu::Marshal(data_stream);
    firing_entity_id_.Marshal(data_stream);
    target_entity_id_.Marshal(data_stream);
  }
  void Unmarshal(DataStream& data_stream) override {
    Pdu::Unmarshal(data_stream);
    firing_entity_id_.Unmarshal(data_stream);
    target_entity_id_.Unmarshal(data_stream);
  }

  EntityID& GetFiringEntityId() { return firing_entity_id_; }
  [[nodiscard]] const EntityID& GetFiringEntityId() const {
    return firing_entity_id_;
  }
  void SetFiringEntityId(const EntityID& value) { firing_entity_id_ = value; }

  EntityID& GetTargetEntityId() { return target_entity_id_; }
  [[nodiscard]] const EntityID& GetTargetEntityId() const {
    return target_entity_id_;
  }
  void SetTargetEntityId(const EntityID& value) { target_entity_id_ = value; }

  [[nodiscard]] std::size_t GetMarshalledSize() const override {
    return Pdu::GetMarshalledSize() + firing_entity_id_.GetMarshalledSize() +
           target_entity_id_.GetMarshalledSize();
  }

  bool operator==(const WarfareFamilyPdu& rhs) const {
    return Pdu::operator==(rhs) && firing_entity_id_ == rhs.firing_entity_id_ &&
           target_entity_id_ == rhs.target_entity_id_;
  }
};
}  // namespace dis::warfare
