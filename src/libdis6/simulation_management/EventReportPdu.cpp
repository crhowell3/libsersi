#include "libdis6/simulation_management/EventReportPdu.h"

namespace dis {

EventReportPdu::EventReportPdu()
    : event_type_(0),
      padding1_(0),
      number_of_fixed_datum_records_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(21);
}

EventReportPdu::~EventReportPdu() {
  fixed_datums_.clear();
  variable_datums_.clear();
}

uint32_t EventReportPdu::GetEventType() const { return event_type_; }

void EventReportPdu::SetEventType(uint32_t value) { event_type_ = value; }

uint32_t EventReportPdu::GetPadding1() const { return padding1_; }

void EventReportPdu::SetPadding1(uint32_t value) { padding1_ = value; }

uint32_t EventReportPdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datums_.size();
}

uint32_t EventReportPdu::GetNumberOfVariableDatumRecords() const {
  return variable_datums_.size();
}

std::vector<FixedDatum>& EventReportPdu::GetFixedDatums() {
  return fixed_datums_;
}

const std::vector<FixedDatum>& EventReportPdu::GetFixedDatums() const {
  return fixed_datums_;
}

void EventReportPdu::SetFixedDatums(const std::vector<FixedDatum>& value) {
  fixed_datums_ = value;
}

std::vector<VariableDatum>& EventReportPdu::GetVariableDatums() {
  return variable_datums_;
}

const std::vector<VariableDatum>& EventReportPdu::GetVariableDatums() const {
  return variable_datums_;
}

void EventReportPdu::SetVariableDatums(
    const std::vector<VariableDatum>& value) {
  variable_datums_ = value;
}

void EventReportPdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  data_stream << event_type_;
  data_stream << padding1_;
  data_stream << static_cast<uint32_t>(fixed_datums_.size());
  data_stream << static_cast<uint32_t>(variable_datums_.size());

  for (auto x : fixed_datums_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datums_) {
    x.Marshal(data_stream);
  }
}

void EventReportPdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
  data_stream >> event_type_;
  data_stream >> padding1_;
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

bool EventReportPdu::operator==(const EventReportPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(event_type_ == rhs.event_type_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
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

std::size_t EventReportPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() + sizeof(event_type_) +
      sizeof(padding1_) + sizeof(number_of_fixed_datum_records_) +
      sizeof(number_of_variable_datum_records_);

  for (auto list_element : fixed_datums_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : variable_datums_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
