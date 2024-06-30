#pragma once

#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/SimulationAddress.h"
#include "libdis6/synthetic_environment/LinearSegmentParameter.h"
#include "libdis6/synthetic_environment/ObjectType.h"
#include "libdis6/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.11.4: Information abut the addition or modification of a
// synthecic enviroment object that      is anchored to the terrain with a
// single point and has size or orientation. COMPLETE

class LinearObjectStatePdu final : public SyntheticEnvironmentFamilyPdu {
 private:
  /** Object in synthetic environment */
  EntityID object_id_;

  /** Object with which this point object is associated */
  EntityID referenced_object_id_;

  /** unique update number of each state transition of an object */
  uint16_t update_number_;

  /** force ID */
  uint8_t force_id_;

  /** number of linear segment parameters */
  uint8_t number_of_segments_;

  /** requesterID */
  SimulationAddress requester_id_;

  /** receiver ID */
  SimulationAddress receiving_id_;

  /** Object type */
  ObjectType object_type_;

  /** Linear segment parameters */
  std::vector<LinearSegmentParameter> linear_segment_parameters_;

 public:
  LinearObjectStatePdu();
  ~LinearObjectStatePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetObjectId();
  [[nodiscard]] const EntityID& GetObjectId() const;
  void SetObjectId(const EntityID& value);

  EntityID& GetReferencedObjectId();
  [[nodiscard]] const EntityID& GetReferencedObjectId() const;
  void SetReferencedObjectId(const EntityID& value);

  [[nodiscard]] uint16_t GetUpdateNumber() const;
  void SetUpdateNumber(uint16_t value);

  [[nodiscard]] uint8_t GetForceId() const;
  void SetForceId(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfSegments() const;

  SimulationAddress& GetRequesterId();
  [[nodiscard]] const SimulationAddress& GetRequesterId() const;
  void SetRequesterId(const SimulationAddress& value);

  SimulationAddress& GetReceivingId();
  [[nodiscard]] const SimulationAddress& GetReceivingId() const;
  void SetReceivingId(const SimulationAddress& value);

  ObjectType& GetObjectType();
  [[nodiscard]] const ObjectType& GetObjectType() const;
  void SetObjectType(const ObjectType& value);

  std::vector<LinearSegmentParameter>& GetLinearSegmentParameters();
  [[nodiscard]] const std::vector<LinearSegmentParameter>&
  GetLinearSegmentParameters() const;
  void SetLinearSegmentParameters(
      const std::vector<LinearSegmentParameter>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const LinearObjectStatePdu& rhs) const;
};
}  // namespace dis
