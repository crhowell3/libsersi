#include "dis6/simulation_management_reliable/ActionResponseReliablePdu.h"

namespace dis {
ActionResponseReliablePdu::ActionResponseReliablePdu()
    : request_id_(0),
      response_status_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(57);
}

ActionResponseReliablePdu::~ActionResponseReliablePdu() {
  fixed_datum_records_.clear();
  variable_datum_records_.clear();
}

uint32_t ActionResponseReliablePdu::GetRequestId() const { return request_id_; }

void ActionResponseReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

uint32_t ActionResponseReliablePdu::GetResponseStatus() const {
  return response_status_;
}

void ActionResponseReliablePdu::SetResponseStatus(uint32_t value) {
  response_status_ = value;
}

uint32_t ActionResponseReliablePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datum_records_.size();
}

uint32_t ActionResponseReliablePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_records_.size();
}

std::vector<FixedDatum>& ActionResponseReliablePdu::GetFixedDatumRecords() {
  return fixed_datum_records_;
}

const std::vector<FixedDatum>& ActionResponseReliablePdu::GetFixedDatumRecords()
    const {
  return fixed_datum_records_;
}

void ActionResponseReliablePdu::SetFixedDatumRecords(
    const std::vector<FixedDatum>& value) {
  fixed_datum_records_ = value;
}

std::vector<VariableDatum>&
ActionResponseReliablePdu::GetVariableDatumRecords() {
  return variable_datum_records_;
}

const std::vector<VariableDatum>&
ActionResponseReliablePdu::GetVariableDatumRecords() const {
  return variable_datum_records_;
}

void ActionResponseReliablePdu::SetVariableDatumRecords(
    const std::vector<VariableDatum>& value) {
  variable_datum_records_ = value;
}

void ActionResponseReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << request_id_;
  data_stream << response_status_;
  data_stream << static_cast<uint32_t>(fixed_datum_records_.size());
  data_stream << static_cast<uint32_t>(variable_datum_records_.size());

  for (auto x : fixed_datum_records_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datum_records_) {
    x.Marshal(data_stream);
  }
}

void ActionResponseReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> response_status_;
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

bool ActionResponseReliablePdu::operator==(
    const ActionResponseReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(response_status_ == rhs.response_status_)) {
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

std::size_t ActionResponseReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(request_id_) + sizeof(response_status_) +
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
