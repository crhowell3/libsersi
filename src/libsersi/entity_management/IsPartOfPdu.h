#pragma once

#include <cstddef>

#include "libsersi/common/EntityID.h"
#include "libsersi/common/EntityType.h"
#include "libsersi/common/Vector3Float.h"
#include "libsersi/entity_management/EntityManagementFamilyPdu.h"
#include "libsersi/entity_management/NamedLocation.h"
#include "libsersi/entity_management/Relationship.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.9.4 The joining of two or more simulation entities is
// communicated by this PDU. COMPLETE

class IsPartOfPdu final : public EntityManagementFamilyPdu {
 private:
  /** ID of entity originating PDU */
  EntityID originating_entity_id_;

  /** ID of entity receiving PDU */
  EntityID receiving_entity_id_;

  /** relationship of joined parts */
  Relationship relationship_;

  /** location of part; centroid of part in host's coordinate system. x=range,
   * y=bearing, z=0 */
  Vector3Float part_location_;

  /** named location */
  NamedLocation named_location_id_;

  /** entity type */
  EntityType part_entity_type_;

 public:
  IsPartOfPdu();
  ~IsPartOfPdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetOriginatingEntityId();
  [[nodiscard]] const EntityID& GetOriginatingEntityId() const;
  void SetOriginatingEntityId(const EntityID& value);

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  Relationship& GetRelationship();
  [[nodiscard]] const Relationship& GetRelationship() const;
  void SetRelationship(const Relationship& value);

  Vector3Float& GetPartLocation();
  [[nodiscard]] const Vector3Float& GetPartLocation() const;
  void SetPartLocation(const Vector3Float& value);

  NamedLocation& GetNamedLocationId();
  [[nodiscard]] const NamedLocation& GetNamedLocationId() const;
  void SetNamedLocationId(const NamedLocation& value);

  EntityType& GetPartEntityType();
  [[nodiscard]] const EntityType& GetPartEntityType() const;
  void SetPartEntityType(const EntityType& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const IsPartOfPdu& rhs) const;
};
}  // namespace dis
