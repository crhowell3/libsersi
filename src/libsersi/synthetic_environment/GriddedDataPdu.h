#pragma once

#include <vector>

#include "libsersi/common/EntityID.h"
#include "libsersi/common/EntityType.h"
#include "libsersi/common/Orientation.h"
#include "libsersi/synthetic_environment/GridAxisRecord.h"
#include "libsersi/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.11.2: Information about globat, spatially varying enviornmental
// effects. This requires manual cleanup; the grid axis        records are
// variable sized. UNFINISHED

class GriddedDataPdu final : public SyntheticEnvironmentFamilyPdu {
 private:
  /** environmental simulation application ID */
  EntityID environmental_simulation_application_id_;

  /** unique identifier for each piece of enviornmental data */
  uint16_t field_number_;

  /** sequence number for the total set of PDUS used to transmit the data */
  uint16_t pdu_number_;

  /** Total number of PDUS used to transmit the data */
  uint16_t pdu_total_;

  /** coordinate system of the grid */
  uint16_t coordinate_system_;

  /** number of grid axes for the environmental data */
  uint8_t number_of_grid_axes_;

  /** are domain grid axes identidal to those of the priveious domain update? */
  uint8_t constant_grid_;

  /** type of environment */
  EntityType environment_type_;

  /** orientation of the data grid */
  Orientation orientation_;

  /** valid time of the enviormental data sample, 64 bit uint32_t */
  uint64_t sample_time_;

  /** total number of all data values for all pdus for an environmental sample
   */
  uint32_t total_values_;

  /** total number of data values at each grid point. */
  uint8_t vector_dimension_;

  /** padding */
  uint16_t padding1_;

  /** padding */
  uint8_t padding2_;

  /** Grid data ^^^This is wrong */
  std::vector<GridAxisRecord> grid_data_list_;

 public:
  GriddedDataPdu();
  ~GriddedDataPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetEnvironmentalSimulationApplicationId();
  [[nodiscard]] const EntityID& GetEnvironmentalSimulationApplicationId() const;
  void SetEnvironmentalSimulationApplicationId(const EntityID& value);

  [[nodiscard]] uint16_t GetFieldNumber() const;
  void SetFieldNumber(uint16_t value);

  [[nodiscard]] uint16_t GetPduNumber() const;
  void SetPduNumber(uint16_t value);

  [[nodiscard]] uint16_t GetPduTotal() const;
  void SetPduTotal(uint16_t value);

  [[nodiscard]] uint16_t GetCoordinateSystem() const;
  void SetCoordinateSystem(uint16_t value);

  [[nodiscard]] uint8_t GetNumberOfGridAxes() const;

  [[nodiscard]] uint8_t GetConstantGrid() const;
  void SetConstantGrid(uint8_t value);

  EntityType& GetEnvironmentType();
  [[nodiscard]] const EntityType& GetEnvironmentType() const;
  void SetEnvironmentType(const EntityType& value);

  Orientation& GetOrientation();
  [[nodiscard]] const Orientation& GetOrientation() const;
  void SetOrientation(const Orientation& value);

  [[nodiscard]] uint64_t GetSampleTime() const;
  void SetSampleTime(uint64_t value);

  [[nodiscard]] uint32_t GetTotalValues() const;
  void SetTotalValues(uint32_t value);

  [[nodiscard]] uint8_t GetVectorDimension() const;
  void SetVectorDimension(uint8_t value);

  [[nodiscard]] uint16_t GetPadding1() const;
  void SetPadding1(uint16_t value);

  [[nodiscard]] uint8_t GetPadding2() const;
  void SetPadding2(uint8_t value);

  std::vector<GridAxisRecord>& GetGridDataList();
  [[nodiscard]] const std::vector<GridAxisRecord>& GetGridDataList() const;
  void SetGridDataList(const std::vector<GridAxisRecord>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const GriddedDataPdu& rhs) const;
};
}  // namespace dis
