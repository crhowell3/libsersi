#include "dis6/simulation_management_reliable/DataQueryReliablePdu.h"

namespace dis {
DataQueryReliablePdu::DataQueryReliablePdu()
    : required_reliability_service_(0),
      pad1_(0),
      pad2_(0),
      request_id_(0),
      time_interval_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(58);
}

DataQueryReliablePdu::~DataQueryReliablePdu() {
  fixed_datum_records_.clear();
  variable_datum_records_.clear();
}

uint8_t DataQueryReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void DataQueryReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t DataQueryReliablePdu::GetPad1() const { return pad1_; }

void DataQueryReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t DataQueryReliablePdu::GetPad2() const { return pad2_; }

void DataQueryReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t DataQueryReliablePdu::GetRequestId() const { return request_id_; }

void DataQueryReliablePdu::SetRequestId(uint32_t value) { request_id_ = value; }

uint32_t DataQueryReliablePdu::GetTimeInterval() const {
  return time_interval_;
}

void DataQueryReliablePdu::SetTimeInterval(uint32_t value) {
  time_interval_ = value;
}

uint32_t DataQueryReliablePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datum_records_.size();
}

uint32_t DataQueryReliablePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_records_.size();
}

std::vector<FixedDatum>& DataQueryReliablePdu::GetFixedDatumRecords() {
  return fixed_datum_records_;
}

const std::vector<FixedDatum>& DataQueryReliablePdu::GetFixedDatumRecords()
    const {
  return fixed_datum_records_;
}

void DataQueryReliablePdu::SetFixedDatumRecords(
    const std::vector<FixedDatum>& value) {
  fixed_datum_records_ = value;
}

std::vector<VariableDatum>& DataQueryReliablePdu::GetVariableDatumRecords() {
  return variable_datum_records_;
}

const std::vector<VariableDatum>&
DataQueryReliablePdu::GetVariableDatumRecords() const {
  return variable_datum_records_;
}

void DataQueryReliablePdu::SetVariableDatumRecords(
    const std::vector<VariableDatum>& value) {
  variable_datum_records_ = value;
}

void DataQueryReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << request_id_;
  data_stream << time_interval_;
  data_stream << static_cast<uint32_t>(fixed_datum_records_.size());
  data_stream << static_cast<uint32_t>(variable_datum_records_.size());

  for (auto x : fixed_datum_records_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datum_records_) {
    x.Marshal(data_stream);
  }
}

void DataQueryReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> request_id_;
  data_stream >> time_interval_;
  data_stream >> number_of_fixed_datum_records_;
  data_stream >> number_of_variable_datum_records_;

  fixed_datum_records_.clear();
  for (std::size_t idx = 0; idx < number_of_fixed_datum_records_; idx++) {
    FixedDatum x;
    x.Unmarshal(data_stream);
    fixed_datum_records_.push_back(x);
  }

  variable_datum_records_.clear();
  for (std::size_t idx = 0; idx < number_of_variable_datum_records_; idx++) {
    VariableDatum x;
    x.Unmarshal(data_stream);
    variable_datum_records_.push_back(x);
  }
}

bool DataQueryReliablePdu::operator==(const DataQueryReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(required_reliability_service_ == rhs.required_reliability_service_)) {
    ivars_equal = false;
  }
  if (!(pad1_ == rhs.pad1_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(time_interval_ == rhs.time_interval_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < fixed_datum_records_.size(); idx++) {
    if (!(fixed_datum_records_[idx] == rhs.fixed_datum_records_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < variable_datum_records_.size(); idx++) {
    if (!(variable_datum_records_[idx] == rhs.variable_datum_records_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t DataQueryReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(required_reliability_service_) + sizeof(pad1_) + sizeof(pad2_) +
      sizeof(request_id_) + sizeof(time_interval_) +
      sizeof(number_of_fixed_datum_records_) +
      sizeof(number_of_variable_datum_records_);

  for (auto list_element : fixed_datum_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : variable_datum_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
