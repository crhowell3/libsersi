#include simulation_management_reliable/EventReportReliablePdu.h"

namespace dis {
EventReportReliablePdu::EventReportReliablePdu()
    : event_type_(0),
      pad1_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(61);
}

EventReportReliablePdu::~EventReportReliablePdu() {
  fixed_datum_records_.clear();
  variable_datum_records_.clear();
}

uint16_t EventReportReliablePdu::GetEventType() const { return event_type_; }

void EventReportReliablePdu::SetEventType(uint16_t value) {
  event_type_ = value;
}

uint32_t EventReportReliablePdu::GetPad1() const { return pad1_; }

void EventReportReliablePdu::SetPad1(uint32_t value) { pad1_ = value; }

uint32_t EventReportReliablePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datum_records_.size();
}

uint32_t EventReportReliablePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_records_.size();
}

std::vector<FixedDatum>& EventReportReliablePdu::GetFixedDatumRecords() {
  return fixed_datum_records_;
}

const std::vector<FixedDatum>& EventReportReliablePdu::GetFixedDatumRecords()
    const {
  return fixed_datum_records_;
}

void EventReportReliablePdu::SetFixedDatumRecords(
    const std::vector<FixedDatum>& value) {
  fixed_datum_records_ = value;
}

std::vector<VariableDatum>& EventReportReliablePdu::GetVariableDatumRecords() {
  return variable_datum_records_;
}

const std::vector<VariableDatum>&
EventReportReliablePdu::GetVariableDatumRecords() const {
  return variable_datum_records_;
}

void EventReportReliablePdu::SetVariableDatumRecords(
    const std::vector<VariableDatum>& value) {
  variable_datum_records_ = value;
}

void EventReportReliablePdu::Marshal(ByteBuffer& byte_buffer) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(byte_buffer);
  byte_buffer << event_type_;
  byte_buffer << pad1_;
  byte_buffer << static_cast<uint32_t>(fixed_datum_records_.size());
  byte_buffer << static_cast<uint32_t>(variable_datum_records_.size());

  for (auto x : fixed_datum_records_) {
    x.Marshal(byte_buffer);
  }

  for (const auto& x : variable_datum_records_) {
    x.Marshal(byte_buffer);
  }
}

void EventReportReliablePdu::Unmarshal(ByteBuffer& byte_buffer) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(byte_buffer);
  byte_buffer >> event_type_;
  byte_buffer >> pad1_;
  byte_buffer >> number_of_fixed_datum_records_;
  byte_buffer >> number_of_variable_datum_records_;

  fixed_datum_records_.clear();
  for (std::size_t idx = 0; idx < number_of_fixed_datum_records_; idx++) {
    FixedDatum x;
    x.Unmarshal(byte_buffer);
    fixed_datum_records_.push_back(x);
  }

  variable_datum_records_.clear();
  for (std::size_t idx = 0; idx < number_of_variable_datum_records_; idx++) {
    VariableDatum x;
    x.Unmarshal(byte_buffer);
    variable_datum_records_.push_back(x);
  }
}

bool EventReportReliablePdu::operator==(
    const EventReportReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(event_type_ == rhs.event_type_)) {
    ivars_equal = false;
  }
  if (!(pad1_ == rhs.pad1_)) {
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

std::size_t EventReportReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(event_type_) + sizeof(pad1_) +
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
