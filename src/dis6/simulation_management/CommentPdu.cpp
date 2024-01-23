#include "dis6/simulation_management/CommentPdu.h"

namespace dis {
CommentPdu::CommentPdu()
    : number_of_fixed_datum_records_(0), number_of_variable_datum_records_(0) {
  SetPduType(22);
}

CommentPdu::~CommentPdu() {
  fixed_datums_.clear();
  variable_datums_.clear();
}

uint32_t CommentPdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datums_.size();
}

uint32_t CommentPdu::GetNumberOfVariableDatumRecords() const {
  return variable_datums_.size();
}

std::vector<FixedDatum>& CommentPdu::GetFixedDatums() { return fixed_datums_; }

const std::vector<FixedDatum>& CommentPdu::GetFixedDatums() const {
  return fixed_datums_;
}

void CommentPdu::SetFixedDatums(const std::vector<FixedDatum>& value) {
  fixed_datums_ = value;
}

std::vector<VariableDatum>& CommentPdu::GetVariableDatums() {
  return variable_datums_;
}

const std::vector<VariableDatum>& CommentPdu::GetVariableDatums() const {
  return variable_datums_;
}

void CommentPdu::SetVariableDatums(const std::vector<VariableDatum>& value) {
  variable_datums_ = value;
}

void CommentPdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  data_stream << static_cast<uint32_t>(fixed_datums_.size());
  data_stream << static_cast<uint32_t>(variable_datums_.size());

  for (auto x : fixed_datums_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datums_) {
    x.Marshal(data_stream);
  }
}

void CommentPdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
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

bool CommentPdu::operator==(const CommentPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

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

std::size_t CommentPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() +
      sizeof(number_of_fixed_datum_records_) +
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
