#include "dis6/simulation_management/ActionResponsePdu.h"

namespace dis {
ActionResponsePdu::ActionResponsePdu()
    : request_id_(0),
      request_status_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(17);
}

ActionResponsePdu::~ActionResponsePdu() {
  fixed_datums_.clear();
  variable_datums_.clear();
}

uint32_t ActionResponsePdu::GetRequestId() const { return request_id_; }

void ActionResponsePdu::SetRequestId(uint32_t value) { request_id_ = value; }

uint32_t ActionResponsePdu::GetRequestStatus() const { return request_status_; }

void ActionResponsePdu::SetRequestStatus(uint32_t value) {
  request_status_ = value;
}

uint32_t ActionResponsePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datums_.size();
}

uint32_t ActionResponsePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datums_.size();
}

std::vector<FixedDatum>& ActionResponsePdu::GetFixedDatums() {
  return fixed_datums_;
}

const std::vector<FixedDatum>& ActionResponsePdu::GetFixedDatums() const {
  return fixed_datums_;
}

void ActionResponsePdu::SetFixedDatums(const std::vector<FixedDatum>& value) {
  fixed_datums_ = value;
}

std::vector<VariableDatum>& ActionResponsePdu::GetVariableDatums() {
  return variable_datums_;
}

const std::vector<VariableDatum>& ActionResponsePdu::GetVariableDatums() const {
  return variable_datums_;
}

void ActionResponsePdu::SetVariableDatums(
    const std::vector<VariableDatum>& value) {
  variable_datums_ = value;
}

void ActionResponsePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  data_stream << request_id_;
  data_stream << request_status_;
  data_stream << static_cast<uint32_t>(fixed_datums_.size());
  data_stream << static_cast<uint32_t>(variable_datums_.size());

  for (auto x : fixed_datums_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datums_) {
    x.Marshal(data_stream);
  }
}

void ActionResponsePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> request_status_;
  data_stream >> number_of_fixed_datum_records_;
  data_stream >> number_of_variable_datum_records_;

  fixed_datums_.clear();
  for (std::size_t idx = 0; idx < number_of_fixed_datum_records_; idx++) {
    FixedDatum x;
    x.Unmarshal(data_stream);
    fixed_datums_.push_back(x);
  }

  variable_datums_.clear();
  for (std::size_t idx = 0; idx < number_of_variable_datum_records_; idx++) {
    VariableDatum x;
    x.Unmarshal(data_stream);
    variable_datums_.push_back(x);
  }
}

bool ActionResponsePdu::operator==(const ActionResponsePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(request_status_ == rhs.request_status_)) {
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

std::size_t ActionResponsePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() + sizeof(request_id_) +
      sizeof(request_status_) + sizeof(number_of_fixed_datum_records_) +
      sizeof(number_of_variable_datum_records_);

  for (auto list_element : fixed_datums_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  for (const auto& list_element : variable_datums_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
