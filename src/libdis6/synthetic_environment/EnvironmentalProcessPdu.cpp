#include "libdis6/synthetic_environment/EnvironmentalProcessPdu.h"

namespace dis {
EnvironmentalProcessPdu::EnvironmentalProcessPdu()
    : model_type_(0),
      environment_status_(0),
      number_of_environment_records_(0),
      sequence_number_(0) {
  SetPduType(41);
}

EnvironmentalProcessPdu::~EnvironmentalProcessPdu() {
  environment_records_.clear();
}

dis::EntityID& EnvironmentalProcessPdu::GetEnvironmentalProcessId() {
  return environmental_process_id_;
}

const dis::EntityID& EnvironmentalProcessPdu::GetEnvironmentalProcessId()
    const {
  return environmental_process_id_;
}

void EnvironmentalProcessPdu::SetEnvironmentalProcessId(
    const dis::EntityID& value) {
  environmental_process_id_ = value;
}

dis::EntityType& EnvironmentalProcessPdu::GetEnvironmentType() {
  return environment_type_;
}

const dis::EntityType& EnvironmentalProcessPdu::GetEnvironmentType() const {
  return environment_type_;
}

void EnvironmentalProcessPdu::SetEnvironmentType(const dis::EntityType& value) {
  environment_type_ = value;
}

uint8_t EnvironmentalProcessPdu::GetModelType() const { return model_type_; }

void EnvironmentalProcessPdu::SetModelType(uint8_t value) {
  model_type_ = value;
}

uint8_t EnvironmentalProcessPdu::GetEnvironmentStatus() const {
  return environment_status_;
}

void EnvironmentalProcessPdu::SetEnvironmentStatus(uint8_t value) {
  environment_status_ = value;
}

uint8_t EnvironmentalProcessPdu::GetNumberOfEnvironmentRecords() const {
  return environment_records_.size();
}

uint16_t EnvironmentalProcessPdu::GetSequenceNumber() const {
  return sequence_number_;
}

void EnvironmentalProcessPdu::SetSequenceNumber(uint16_t value) {
  sequence_number_ = value;
}

std::vector<Environment>& EnvironmentalProcessPdu::GetEnvironmentRecords() {
  return environment_records_;
}

const std::vector<Environment>& EnvironmentalProcessPdu::GetEnvironmentRecords()
    const {
  return environment_records_;
}

void EnvironmentalProcessPdu::SetEnvironmentRecords(
    const std::vector<Environment>& value) {
  environment_records_ = value;
}

void EnvironmentalProcessPdu::Marshal(DataStream& data_stream) const {
  SyntheticEnvironmentFamilyPdu::Marshal(data_stream);
  environmental_process_id_.Marshal(data_stream);
  environment_type_.Marshal(data_stream);
  data_stream << model_type_;
  data_stream << environment_status_;
  data_stream << static_cast<uint8_t>(environment_records_.size());
  data_stream << sequence_number_;

  for (const auto& x : environment_records_) {
    x.Marshal(data_stream);
  }
}

void EnvironmentalProcessPdu::Unmarshal(DataStream& data_stream) {
  SyntheticEnvironmentFamilyPdu::Unmarshal(data_stream);
  environmental_process_id_.Unmarshal(data_stream);
  environment_type_.Unmarshal(data_stream);
  data_stream >> model_type_;
  data_stream >> environment_status_;
  data_stream >> number_of_environment_records_;
  data_stream >> sequence_number_;

  environment_records_.clear();
  for (std::size_t idx = 0; idx < number_of_environment_records_; idx++) {
    Environment x;
    x.Unmarshal(data_stream);
    environment_records_.push_back(x);
  }
}

bool EnvironmentalProcessPdu::operator==(
    const EnvironmentalProcessPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SyntheticEnvironmentFamilyPdu::operator==(rhs);

  if (!(environmental_process_id_ == rhs.environmental_process_id_)) {
    ivars_equal = false;
  }
  if (!(environment_type_ == rhs.environment_type_)) {
    ivars_equal = false;
  }
  if (!(model_type_ == rhs.model_type_)) {
    ivars_equal = false;
  }
  if (!(environment_status_ == rhs.environment_status_)) {
    ivars_equal = false;
  }
  if (!(sequence_number_ == rhs.sequence_number_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < environment_records_.size(); idx++) {
    if (!(environment_records_[idx] == rhs.environment_records_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t EnvironmentalProcessPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SyntheticEnvironmentFamilyPdu::GetMarshalledSize() +
      environmental_process_id_.GetMarshalledSize() +
      environment_type_.GetMarshalledSize() + sizeof(model_type_) +
      sizeof(environment_status_) + sizeof(number_of_environment_records_) +
      sizeof(sequence_number_);

  for (const auto& list_element : environment_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
