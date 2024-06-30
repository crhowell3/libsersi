#pragma once

#include "libdis6/common/EntityID.h"
#include "libdis6/common/Orientation.h"
#include "libdis6/common/SimulationAddress.h"
#include "libdis6/common/Vector3Double.h"
#include "libdis6/synthetic_environment/ObjectType.h"
#include "libdis6/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.11.3: Inormation abut the addition or modification of a synthecic
// enviroment object that is anchored      to the terrain with a single point.
// COMPLETE

class PointObjectStatePdu final : public SyntheticEnvironmentFamilyPdu {
 private:
  /** Object in synthetic environment */
  EntityID object_id_;

  /** Object with which this point object is associated */
  EntityID referenced_object_id_;

  /** unique update number of each state transition of an object */
  uint16_t update_number_;

  /** force ID */
  uint8_t force_id_;

  /** modifications */
  uint8_t modifications_;

  /** Object type */
  ObjectType object_type_;

  /** Object location */
  Vector3Double object_location_;

  /** Object orientation */
  Orientation object_orientation_;

  /** Object apperance */
  double object_appearance_;

  /** requesterID */
  SimulationAddress requester_id_;

  /** receiver ID */
  SimulationAddress receiving_id_;

  /** padding */
  uint32_t pad2_;

 public:
  PointObjectStatePdu();
  ~PointObjectStatePdu() final;

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

  ObjectType& GetObjectType();
  [[nodiscard]] const ObjectType& GetObjectType() const;
  void SetObjectType(const ObjectType& value);

  Vector3Double& GetObjectLocation();
  [[nodiscard]] const Vector3Double& GetObjectLocation() const;
  void SetObjectLocation(const Vector3Double& value);

  Orientation& GetObjectOrientation();
  [[nodiscard]] const Orientation& GetObjectOrientation() const;
  void SetObjectOrientation(const Orientation& value);

  [[nodiscard]] double GetObjectAppearance() const;
  void SetObjectAppearance(double value);

  SimulationAddress& GetRequesterId();
  [[nodiscard]] const SimulationAddress& GetRequesterId() const;
  void SetRequesterId(const SimulationAddress& value);

  SimulationAddress& GetReceivingId();
  [[nodiscard]] const SimulationAddress& GetReceivingId() const;
  void SetReceivingId(const SimulationAddress& value);

  [[nodiscard]] uint32_t GetPad2() const;
  void SetPad2(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const PointObjectStatePdu& rhs) const;
};
}  // namespace dis
