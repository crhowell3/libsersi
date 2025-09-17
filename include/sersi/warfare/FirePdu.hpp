#pragma once

#include <cstddef>

#include "sersi/common/EntityID.hpp"
#include "sersi/common/EventID.hpp"
#include "sersi/common/Vector3Double.hpp"
#include "sersi/common/Vector3Float.hpp"
#include "sersi/utils/DataStream.hpp"
#include "sersi/warfare/BurstDescriptor.hpp"
#include "sersi/warfare/WarfareFamilyPdu.hpp"

namespace dis::warfare {
// Sectioin 5.3.4.1. Information about someone firing something. COMPLETE

class FirePdu final : public WarfareFamilyPdu {
 private:
  /** ID of the munition that is being shot */
  EntityID munition_id_;

  /** ID of event */
  EventID event_id_;

  int fire_mission_index_;

  /** location of the firing event */
  Vector3Double location_in_world_coordinates_;

  /** Describes munitions used in the firing event */
  BurstDescriptor burst_descriptor_;

  /** Velocity of the ammunition */
  Vector3Float velocity_;

  /** range to the target */
  float range_;

 public:
  FirePdu() {
    SetPduType(2);
    fire_mission_index_ = 0;
    range_ = 0.0F;
  }
  ~FirePdu() override = default;

  void Marshal(DataStream& data_stream) const override {
    WarfareFamilyPdu::Marshal(data_stream);
    munition_id_.Marshal(data_stream);
    event_id_.Marshal(data_stream);
    data_stream << fire_mission_index_;
    location_in_world_coordinates_.Marshal(data_stream);
    burst_descriptor_.Marshal(data_stream);
    velocity_.Marshal(data_stream);
    data_stream << range_;
  }
  void Unmarshal(DataStream& data_stream) override {
    WarfareFamilyPdu::Unmarshal(data_stream);
    munition_id_.Unmarshal(data_stream);
    event_id_.Unmarshal(data_stream);
    data_stream >> fire_mission_index_;
    location_in_world_coordinates_.Unmarshal(data_stream);
    burst_descriptor_.Unmarshal(data_stream);
    velocity_.Unmarshal(data_stream);
    data_stream >> range_;
  }

  EntityID& GetMunitionId() { return munition_id_; }
  [[nodiscard]] const EntityID& GetMunitionId() const { return munition_id_; }
  void SetMunitionId(const EntityID& value) { munition_id_ = value; }

  EventID& GetEventId();
  [[nodiscard]] const EventID& GetEventId() const;
  void SetEventId(const EventID& value);

  [[nodiscard]] int GetFireMissionIndex() const;
  void SetFireMissionIndex(int value);

  Vector3Double& GetLocationInWorldCoordinates();
  [[nodiscard]] const Vector3Double& GetLocationInWorldCoordinates() const;
  void SetLocationInWorldCoordinates(const Vector3Double& value);

  BurstDescriptor& GetBurstDescriptor();
  [[nodiscard]] const BurstDescriptor& GetBurstDescriptor() const;
  void SetBurstDescriptor(const BurstDescriptor& value);

  Vector3Float& GetVelocity();
  [[nodiscard]] const Vector3Float& GetVelocity() const;
  void SetVelocity(const Vector3Float& value);

  [[nodiscard]] float GetRange() const;
  void SetRange(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const FirePdu& rhs) const;
};

}  // namespace dis::warfare
