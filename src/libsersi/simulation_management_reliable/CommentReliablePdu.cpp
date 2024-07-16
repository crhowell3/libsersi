#include "libsersi/simulation_management_reliable/CommentReliablePdu.h"

namespace dis {
CommentReliablePdu::CommentReliablePdu()
    : number_of_fixed_datum_records_(0), number_of_variable_datum_records_(0) {
  SetPduType(62);
}

CommentReliablePdu::~CommentReliablePdu() {
  fixed_datum_records_.clear();
  variable_datum_records_.clear();
}

uint32_t CommentReliablePdu::GetNumberOfFixedDatumRecords() const {
  return fixed_datum_records_.size();
}

uint32_t CommentReliablePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_records_.size();
}

std::vector<FixedDatum>& CommentReliablePdu::GetFixedDatumRecords() {
  return fixed_datum_records_;
}

const std::vector<FixedDatum>& CommentReliablePdu::GetFixedDatumRecords()
    const {
  return fixed_datum_records_;
}

void CommentReliablePdu::SetFixedDatumRecords(
    const std::vector<FixedDatum>& value) {
  fixed_datum_records_ = value;
}

std::vector<VariableDatum>& CommentReliablePdu::GetVariableDatumRecords() {
  return variable_datum_records_;
}

const std::vector<VariableDatum>& CommentReliablePdu::GetVariableDatumRecords()
    const {
  return variable_datum_records_;
}

void CommentReliablePdu::SetVariableDatumRecords(
    const std::vector<VariableDatum>& value) {
  variable_datum_records_ = value;
}

void CommentReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << static_cast<uint32_t>(fixed_datum_records_.size());
  data_stream << static_cast<uint32_t>(variable_datum_records_.size());

  for (auto x : fixed_datum_records_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : variable_datum_records_) {
    x.Marshal(data_stream);
  }
}

void CommentReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
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

bool CommentReliablePdu::operator==(const CommentReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

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

std::size_t CommentReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
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
