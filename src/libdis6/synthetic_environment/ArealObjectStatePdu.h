#pragma once

#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/EntityType.h"
#include "libdis6/common/SimulationAddress.h"
#include "libdis6/common/Vector3Double.h"
#include "libdis6/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.11.5: Information about the addition/modification of an oobject
// that is geometrically      achored to the terrain with a set of three or more
// points that come to a closure. COMPLETE

class ArealObjectStatePdu final : public SyntheticEnvironmentFamilyPdu {
 private:
  /** Object in synthetic environment */
  EntityID object_id_;

  /** Object with which this point object is associated */
  EntityID referenced_object_id_;

  /** unique update number of each state transition of an object */
  uint16_t update_number_;

  /** force ID */
  uint8_t force_id_;

  /** modifications enumeration */
  uint8_t modifications_;

  /** Object type */
  EntityType object_type_;

  /** Object appearance */
  uint32_t specific_object_appearance_;

  uint16_t general_object_appearance_;

  /** Number of points */
  uint16_t number_of_points_;

  /** requesterID */
  SimulationAddress requester_id_;

  /** receiver ID */
  SimulationAddress receiving_id_;

  /** location of object */
  std::vector<Vector3Double> object_location_;

 public:
  ArealObjectStatePdu();
  ~ArealObjectStatePdu() final;

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

  [[nodiscard]] uint8_t GetModifications() const;
  void SetModifications(uint8_t value);

  EntityType& GetObjectType();
  [[nodiscard]] const EntityType& GetObjectType() const;
  void SetObjectType(const EntityType& value);

  [[nodiscard]] uint32_t GetSpecificObjectAppearance() const;
  void SetSpecificObjectAppearance(uint32_t value);

  [[nodiscard]] uint16_t GetGeneralObjectAppearance() const;
  void SetGeneralObjectAppearance(uint16_t value);

  [[nodiscard]] uint16_t GetNumberOfPoints() const;

  SimulationAddress& GetRequesterId();
  [[nodiscard]] const SimulationAddress& GetRequesterId() const;
  void SetRequesterId(const SimulationAddress& value);

  SimulationAddress& GetReceivingId();
  [[nodiscard]] const SimulationAddress& GetReceivingId() const;
  void SetReceivingId(const SimulationAddress& value);

  std::vector<Vector3Double>& GetObjectLocation();
  [[nodiscard]] const std::vector<Vector3Double>& GetObjectLocation() const;
  void SetObjectLocation(const std::vector<Vector3Double>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const ArealObjectStatePdu& rhs) const;
};
}  // namespace dis
