#ifndef DIS6_WARFARE_FIREPDU_H_
#define DIS6_WARFARE_FIREPDU_H_

#include <cstddef>

#include "dis6/common/EntityID.h"
#include "dis6/common/EventID.h"
#include "dis6/common/Vector3Double.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/utils/DataStream.h"
#include "dis6/warfare/BurstDescriptor.h"
#include "dis6/warfare/WarfareFamilyPdu.h"

namespace dis {
// Sectioin 5.3.4.1. Information about someone firing something. COMPLETE

class FirePdu : public WarfareFamilyPdu {
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
  FirePdu();
  ~FirePdu() override;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  EntityID& GetMunitionId();
  [[nodiscard]] const EntityID& GetMunitionId() const;
  void SetMunitionId(const EntityID& value);

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

}  // namespace dis

#endif  // DIS6_WARFARE_FIREPDU_H_
