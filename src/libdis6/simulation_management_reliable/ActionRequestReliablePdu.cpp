#include "libdis6/simulation_management_reliable/ActionRequestReliablePdu.h"

namespace dis {
ActionRequestReliablePdu::ActionRequestReliablePdu()
    : required_reliability_service_(0),
      pad1_(0),
      pad2_(0),
      request_id_(0),
      action_id_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(56);
}

ActionRequestReliablePdu::~ActionRequestReliablePdu() {
  fixed_datum_records_.clear();
  variable_datum_records_.clear();
}

uint8_t ActionRequestReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void ActionRequestReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t ActionRequestReliablePdu::GetPad1() const { return pad1_; }

void ActionRequestReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t ActionRequestReliablePdu::GetPad2() const { return pad2_; }

void ActionRequestReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t ActionRequestReliablePdu::GetRequestId() const { return request_id_; }

void ActionRequestReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

uint32_t ActionRequestReliablePdu::GetActionId() const { return action_id_; }

void ActionRequestReliablePdu::SetActionId(uint32_t value) {
  action_id_ = value;
}

uint32_t ActionRequestReliablePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datum_records_.size();
}

uint32_t ActionRequestReliablePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_records_.size();
}

std::vector<FixedDatum>& ActionRequestReliablePdu::GetFixedDatumRecords() {
  return fixed_datum_records_;
}

const std::vector<FixedDatum>& ActionRequestReliablePdu::GetFixedDatumRecords()
    const {
  return fixed_datum_records_;
}

void ActionRequestReliablePdu::SetFixedDatumRecords(
    const std::vector<FixedDatum>& value) {
  fixed_datum_records_ = value;
}

std::vector<VariableDatum>&
ActionRequestReliablePdu::GetVariableDatumRecords() {
  return variable_datum_records_;
}

const std::vector<VariableDatum>&
ActionRequestReliablePdu::GetVariableDatumRecords() const {
  return variable_datum_records_;
}

void ActionRequestReliablePdu::SetVariableDatumRecords(
    const std::vector<VariableDatum>& value) {
  variable_datum_records_ = value;
}

void ActionRequestReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << request_id_;
  data_stream << action_id_;
  data_stream << static_cast<uint32_t>(fixed_datum_records_.size());
  data_stream << static_cast<uint32_t>(variable_datum_records_.size());

  for (auto x : fixed_datum_records_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datum_records_) {
    x.Marshal(data_stream);
  }
}

void ActionRequestReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> request_id_;
  data_stream >> action_id_;
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

bool ActionRequestReliablePdu::operator==(
    const ActionRequestReliablePdu& rhs) const {
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
  if (!(action_id_ == rhs.action_id_)) {
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

std::size_t ActionRequestReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(required_reliability_service_) + sizeof(pad1_) + sizeof(pad2_) +
      sizeof(request_id_) + sizeof(action_id_) +
      sizeof(number_of_fixed_datum_records_) +
      sizeof(number_of_fixed_datum_records_);

  for (auto list_element : fixed_datum_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : variable_datum_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
