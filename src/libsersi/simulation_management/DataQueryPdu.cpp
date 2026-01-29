#include "libsersi/simulation_management/DataQueryPdu.h"

namespace dis {
DataQueryPdu::DataQueryPdu()
    : request_id_(0),
      time_interval_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(18);
}

DataQueryPdu::~DataQueryPdu() {
  fixed_datums_.clear();
  variable_datums_.clear();
}

uint32_t DataQueryPdu::GetRequestId() const { return request_id_; }

void DataQueryPdu::SetRequestId(uint32_t value) { request_id_ = value; }

uint32_t DataQueryPdu::GetTimeInterval() const { return time_interval_; }

void DataQueryPdu::SetTimeInterval(uint32_t value) { time_interval_ = value; }

uint32_t DataQueryPdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datums_.size();
}

uint32_t DataQueryPdu::GetNumberOfVariableDatumRecords() const {
  return variable_datums_.size();
}

std::vector<FixedDatum>& DataQueryPdu::GetFixedDatums() {
  return fixed_datums_;
}

const std::vector<FixedDatum>& DataQueryPdu::GetFixedDatums() const {
  return fixed_datums_;
}

void DataQueryPdu::SetFixedDatums(const std::vector<FixedDatum>& value) {
  fixed_datums_ = value;
}

std::vector<VariableDatum>& DataQueryPdu::GetVariableDatums() {
  return variable_datums_;
}

const std::vector<VariableDatum>& DataQueryPdu::GetVariableDatums() const {
  return variable_datums_;
}

void DataQueryPdu::SetVariableDatums(const std::vector<VariableDatum>& value) {
  variable_datums_ = value;
}

void DataQueryPdu::Marshal(ByteBuffer& byte_buffer) const {
  SimulationManagementFamilyPdu::Marshal(byte_buffer);
  byte_buffer << request_id_;
  byte_buffer << time_interval_;
  byte_buffer << static_cast<uint32_t>(fixed_datums_.size());
  byte_buffer << static_cast<uint32_t>(variable_datums_.size());

  for (auto x : fixed_datums_) {
    x.Marshal(byte_buffer);
  }

  for (const auto& x : variable_datums_) {
    x.Marshal(byte_buffer);
  }
}

void DataQueryPdu::Unmarshal(ByteBuffer& byte_buffer) {
  SimulationManagementFamilyPdu::Unmarshal(byte_buffer);
  byte_buffer >> request_id_;
  byte_buffer >> time_interval_;
  byte_buffer >> number_of_fixed_datum_records_;
  byte_buffer >> number_of_variable_datum_records_;

  fixed_datums_.clear();
  for (std::size_t idx = 0; idx < number_of_fixed_datum_records_; idx++) {
    FixedDatum x;
    x.Unmarshal(byte_buffer);
    fixed_datums_.push_back(x);
  }

  variable_datums_.clear();
  for (std::size_t idx = 0; idx < number_of_variable_datum_records_; idx++) {
    VariableDatum x;
    x.Unmarshal(byte_buffer);
    variable_datums_.push_back(x);
  }
}

bool DataQueryPdu::operator==(const DataQueryPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(time_interval_ == rhs.time_interval_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < fixed_datums_.size(); idx++) {
    if (!(fixed_datums_[idx] == rhs.fixed_datums_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < variable_datums_.size(); idx++) {
    if (!(variable_datums_[idx] == rhs.variable_datums_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t DataQueryPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() + sizeof(request_id_) +
      sizeof(time_interval_) + sizeof(number_of_fixed_datum_records_) +
      sizeof(number_of_variable_datum_records_);

  for (auto list_element : fixed_datums_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  for (const auto& list_element : variable_datums_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
