#include "libdis6/synthetic_environment/GriddedDataPdu.h"

namespace dis {
GriddedDataPdu::GriddedDataPdu()
    : field_number_(0),
      pdu_number_(0),
      pdu_total_(0),
      coordinate_system_(0),
      number_of_grid_axes_(0),
      constant_grid_(0),
      sample_time_(0),
      total_values_(0),
      vector_dimension_(0),
      padding1_(0),
      padding2_(0) {
  SetPduType(42);
}

GriddedDataPdu::~GriddedDataPdu() { grid_data_list_.clear(); }

dis::EntityID& GriddedDataPdu::GetEnvironmentalSimulationApplicationId() {
  return environmental_simulation_application_id_;
}

const dis::EntityID& GriddedDataPdu::GetEnvironmentalSimulationApplicationId()
    const {
  return environmental_simulation_application_id_;
}

void GriddedDataPdu::SetEnvironmentalSimulationApplicationId(
    const dis::EntityID& value) {
  environmental_simulation_application_id_ = value;
}

uint16_t GriddedDataPdu::GetFieldNumber() const { return field_number_; }

void GriddedDataPdu::SetFieldNumber(uint16_t value) { field_number_ = value; }

uint16_t GriddedDataPdu::GetPduNumber() const { return pdu_number_; }

void GriddedDataPdu::SetPduNumber(uint16_t value) { pdu_number_ = value; }

uint16_t GriddedDataPdu::GetPduTotal() const { return pdu_total_; }

void GriddedDataPdu::SetPduTotal(uint16_t value) { pdu_total_ = value; }

uint16_t GriddedDataPdu::GetCoordinateSystem() const {
  return coordinate_system_;
}

void GriddedDataPdu::SetCoordinateSystem(uint16_t value) {
  coordinate_system_ = value;
}

uint8_t GriddedDataPdu::GetNumberOfGridAxes() const {
  return grid_data_list_.size();
}

uint8_t GriddedDataPdu::GetConstantGrid() const { return constant_grid_; }

void GriddedDataPdu::SetConstantGrid(uint8_t value) { constant_grid_ = value; }

dis::EntityType& GriddedDataPdu::GetEnvironmentType() {
  return environment_type_;
}

const dis::EntityType& GriddedDataPdu::GetEnvironmentType() const {
  return environment_type_;
}

void GriddedDataPdu::SetEnvironmentType(const dis::EntityType& value) {
  environment_type_ = value;
}

Orientation& GriddedDataPdu::GetOrientation() { return orientation_; }

const Orientation& GriddedDataPdu::GetOrientation() const {
  return orientation_;
}

void GriddedDataPdu::SetOrientation(const Orientation& value) {
  orientation_ = value;
}

uint64_t GriddedDataPdu::GetSampleTime() const { return sample_time_; }

void GriddedDataPdu::SetSampleTime(uint64_t value) { sample_time_ = value; }

uint32_t GriddedDataPdu::GetTotalValues() const { return total_values_; }

void GriddedDataPdu::SetTotalValues(uint32_t value) { total_values_ = value; }

uint8_t GriddedDataPdu::GetVectorDimension() const { return vector_dimension_; }

void GriddedDataPdu::SetVectorDimension(uint8_t value) {
  vector_dimension_ = value;
}

uint16_t GriddedDataPdu::GetPadding1() const { return padding1_; }

void GriddedDataPdu::SetPadding1(uint16_t value) { padding1_ = value; }

uint8_t GriddedDataPdu::GetPadding2() const { return padding2_; }

void GriddedDataPdu::SetPadding2(uint8_t value) { padding2_ = value; }

std::vector<GridAxisRecord>& GriddedDataPdu::GetGridDataList() {
  return grid_data_list_;
}

const std::vector<GridAxisRecord>& GriddedDataPdu::GetGridDataList() const {
  return grid_data_list_;
}

void GriddedDataPdu::SetGridDataList(const std::vector<GridAxisRecord>& value) {
  grid_data_list_ = value;
}

void GriddedDataPdu::Marshal(DataStream& data_stream) const {
  SyntheticEnvironmentFamilyPdu::Marshal(data_stream);
  environmental_simulation_application_id_.Marshal(data_stream);
  data_stream << field_number_;
  data_stream << pdu_number_;
  data_stream << pdu_total_;
  data_stream << coordinate_system_;
  data_stream << static_cast<uint8_t>(grid_data_list_.size());
  data_stream << constant_grid_;
  environment_type_.Marshal(data_stream);
  orientation_.Marshal(data_stream);
  data_stream << sample_time_;
  data_stream << total_values_;
  data_stream << vector_dimension_;
  data_stream << padding1_;
  data_stream << padding2_;

  for (const auto& x : grid_data_list_) {
    x.Marshal(data_stream);
  }
}

void GriddedDataPdu::Unmarshal(DataStream& data_stream) {
  SyntheticEnvironmentFamilyPdu::Unmarshal(data_stream);
  environmental_simulation_application_id_.Unmarshal(data_stream);
  data_stream >> field_number_;
  data_stream >> pdu_number_;
  data_stream >> pdu_total_;
  data_stream >> coordinate_system_;
  data_stream >> number_of_grid_axes_;
  data_stream >> constant_grid_;
  environment_type_.Unmarshal(data_stream);
  orientation_.Unmarshal(data_stream);
  data_stream >> sample_time_;
  data_stream >> total_values_;
  data_stream >> vector_dimension_;
  data_stream >> padding1_;
  data_stream >> padding2_;

  grid_data_list_.clear();
  for (std::size_t idx = 0; idx < number_of_grid_axes_; idx++) {
    GridAxisRecord x;
    x.Unmarshal(data_stream);
    grid_data_list_.push_back(x);
  }
}

bool GriddedDataPdu::operator==(const GriddedDataPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SyntheticEnvironmentFamilyPdu::operator==(rhs);

  if (!(environmental_simulation_application_id_ ==
        rhs.environmental_simulation_application_id_)) {
    ivars_equal = false;
  }
  if (!(field_number_ == rhs.field_number_)) {
    ivars_equal = false;
  }
  if (!(pdu_number_ == rhs.pdu_number_)) {
    ivars_equal = false;
  }
  if (!(pdu_total_ == rhs.pdu_total_)) {
    ivars_equal = false;
  }
  if (!(coordinate_system_ == rhs.coordinate_system_)) {
    ivars_equal = false;
  }
  if (!(constant_grid_ == rhs.constant_grid_)) {
    ivars_equal = false;
  }
  if (!(environment_type_ == rhs.environment_type_)) {
    ivars_equal = false;
  }
  if (!(orientation_ == rhs.orientation_)) {
    ivars_equal = false;
  }
  if (!(sample_time_ == rhs.sample_time_)) {
    ivars_equal = false;
  }
  if (!(total_values_ == rhs.total_values_)) {
    ivars_equal = false;
  }
  if (!(vector_dimension_ == rhs.vector_dimension_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < grid_data_list_.size(); idx++) {
    if (!(grid_data_list_[idx] == rhs.grid_data_list_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t GriddedDataPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SyntheticEnvironmentFamilyPdu::GetMarshalledSize() +
      environmental_simulation_application_id_.GetMarshalledSize() +
      sizeof(field_number_) + sizeof(pdu_number_) + sizeof(pdu_total_) +
      sizeof(coordinate_system_) + sizeof(number_of_grid_axes_) +
      sizeof(constant_grid_) + environment_type_.GetMarshalledSize() +
      orientation_.GetMarshalledSize() + sizeof(sample_time_) +
      sizeof(total_values_) + sizeof(vector_dimension_) + sizeof(padding1_) +
      sizeof(padding2_);

  for (const auto& list_element : grid_data_list_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
