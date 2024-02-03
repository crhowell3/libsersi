#pragma once

#include <cstddef>
#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/common/VariableDatum.h"
#include "dis6/entity_management/EntityManagementFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.9.2 Information about a particular group of entities grouped
// together for the purposes of netowrk bandwidth         reduction or
// aggregation. Needs manual cleanup. The GED size requires a database lookup.
// UNFINISHED

class IsGroupOfPdu final : public EntityManagementFamilyPdu {
 private:
  /** ID of aggregated entities */
  EntityID group_entity_id_;

  /** type of entities constituting the group */
  uint8_t grouped_entity_category_;

  /** Number of individual entities constituting the group */
  uint8_t number_of_grouped_entities_;

  /** padding */
  uint32_t pad2_;

  /** latitude */
  double latitude_;

  /** longitude */
  double longitude_;

  /** GED records about each individual entity in the group. ^^^this is
   * wrong--need a database lookup to find the actual size of the list elements
   */
  std::vector<VariableDatum> grouped_entity_descriptions_;

 public:
  IsGroupOfPdu();
  ~IsGroupOfPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetGroupEntityId();
  [[nodiscard]] const EntityID& GetGroupEntityId() const;
  void SetGroupEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetGroupedEntityCategory() const;
  void SetGroupedEntityCategory(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfGroupedEntities() const;

  [[nodiscard]] uint32_t GetPad2() const;
  void SetPad2(uint32_t value);

  [[nodiscard]] double GetLatitude() const;
  void SetLatitude(double value);

  [[nodiscard]] double GetLongitude() const;
  void SetLongitude(double value);

  std::vector<VariableDatum>& GetGroupedEntityDescriptions();
  [[nodiscard]] const std::vector<VariableDatum>& GetGroupedEntityDescriptions()
      const;
  void SetGroupedEntityDescriptions(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const IsGroupOfPdu& rhs) const;
};
}  // namespace dis
