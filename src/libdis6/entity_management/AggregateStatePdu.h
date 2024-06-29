#pragma once

#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/common/EntityType.h"
#include "dis6/common/Orientation.h"
#include "dis6/common/VariableDatum.h"
#include "dis6/common/Vector3Double.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/entity_management/AggregateID.h"
#include "dis6/entity_management/AggregateMarking.h"
#include "dis6/entity_management/EntityManagementFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.9.1 informationa bout aggregating entities anc communicating
// information about the aggregated entities.        requires manual
// intervention to fix the padding between entityID lists and silent aggregate
// sysem lists--this padding        is dependent on how many entityIDs there
// are, and needs to be on a 32 bit word boundary. UNFINISHED

class AggregateStatePdu final : public EntityManagementFamilyPdu {
 private:
  /** ID of aggregated entities */
  EntityID aggregate_id_;

  /** force ID */
  uint8_t force_id_;

  /** state of aggregate */
  uint8_t aggregate_state_;

  /** entity type of the aggregated entities */
  EntityType aggregate_type_;

  /** formation of aggregated entities */
  uint32_t formation_;

  /** marking for aggregate; first char is charset type, rest is char data */
  AggregateMarking aggregate_marking_;

  /** dimensions of bounding box for the aggregated entities, origin at the
   * center of mass */
  Vector3Float dimensions_;

  /** orientation of the bounding box */
  Orientation orientation_;

  /** center of mass of the aggregation */
  Vector3Double center_of_mass_;

  /** velocity of aggregation */
  Vector3Float velocity_;

  /** number of aggregates */
  uint16_t number_of_dis_aggregates_;

  /** number of entities */
  uint16_t number_of_dis_entities_;

  /** number of silent aggregate types */
  uint16_t number_of_silent_aggregate_types_;

  /** number of silent entity types */
  uint16_t number_of_silent_entity_types_;

  /** aggregates  list */
  std::vector<AggregateID> aggregate_id_list_;

  /** entity ID list */
  std::vector<EntityID> entity_id_list_;

  /** ^^^padding to put the start of the next list on a 32 bit boundary. This
   * needs to be fixed */
  uint8_t pad2_;

  /** silent entity types */
  std::vector<EntityType> silent_aggregate_system_list_;

  /** silent entity types */
  std::vector<EntityType> silent_entity_system_list_;

  /** number of variable datum records */
  uint32_t number_of_variable_datum_records_;

  /** variableDatums */
  std::vector<VariableDatum> variable_datum_list_;

 public:
  AggregateStatePdu();
  ~AggregateStatePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetAggregateId();
  [[nodiscard]] const EntityID& GetAggregateId() const;
  void SetAggregateId(const EntityID& value);

  [[nodiscard]] uint8_t GetForceId() const;
  void SetForceId(uint8_t value);

  [[nodiscard]] uint8_t GetAggregateState() const;
  void SetAggregateState(uint8_t value);

  EntityType& GetAggregateType();
  [[nodiscard]] const EntityType& GetAggregateType() const;
  void SetAggregateType(const EntityType& value);

  [[nodiscard]] uint32_t GetFormation() const;
  void SetFormation(uint32_t value);

  AggregateMarking& GetAggregateMarking();
  [[nodiscard]] const AggregateMarking& GetAggregateMarking() const;
  void SetAggregateMarking(const AggregateMarking& value);

  Vector3Float& GetDimensions();
  [[nodiscard]] const Vector3Float& GetDimensions() const;
  void SetDimensions(const Vector3Float& value);

  Orientation& GetOrientation();
  [[nodiscard]] const Orientation& GetOrientation() const;
  void SetOrientation(const Orientation& value);

  Vector3Double& GetCenterOfMass();
  [[nodiscard]] const Vector3Double& GetCenterOfMass() const;
  void SetCenterOfMass(const Vector3Double& value);

  Vector3Float& GetVelocity();
  [[nodiscard]] const Vector3Float& GetVelocity() const;
  void SetVelocity(const Vector3Float& value);

  [[nodiscard]] uint16_t GetNumberOfDisAggregates() const;

  [[nodiscard]] uint16_t GetNumberOfDisEntities() const;

  [[nodiscard]] uint16_t GetNumberOfSilentAggregateTypes() const;

  [[nodiscard]] uint16_t GetNumberOfSilentEntityTypes() const;

  std::vector<AggregateID>& GetAggregateIdList();
  [[nodiscard]] const std::vector<AggregateID>& GetAggregateIdList() const;
  void SetAggregateIdList(const std::vector<AggregateID>& value);

  std::vector<EntityID>& GetEntityIdList();
  [[nodiscard]] const std::vector<EntityID>& GetEntityIdList() const;
  void SetEntityIdList(const std::vector<EntityID>& value);

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  std::vector<EntityType>& GetSilentAggregateSystemList();
  [[nodiscard]] const std::vector<EntityType>& GetSilentAggregateSystemList()
      const;
  void SetSilentAggregateSystemList(const std::vector<EntityType>& value);

  std::vector<EntityType>& GetSilentEntitySystemList();
  [[nodiscard]] const std::vector<EntityType>& GetSilentEntitySystemList()
      const;
  void SetSilentEntitySystemList(const std::vector<EntityType>& value);

  [[nodiscard]] uint32_t GetNumberOfVariableDatumRecords() const;

  std::vector<VariableDatum>& GetVariableDatumList();
  [[nodiscard]] const std::vector<VariableDatum>& GetVariableDatumList() const;
  void SetVariableDatumList(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const AggregateStatePdu& rhs) const;
};
}  // namespace dis
