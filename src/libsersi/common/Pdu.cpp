#include "libsersi/common/Pdu.h"

namespace dis {
Pdu::Pdu()
    : protocol_version_(6),
      exercise_id_(0),
      pdu_type_(0),
      protocol_family_(0),
      timestamp_(0),
      length_(0),
      padding_(0) {}

Pdu::~Pdu() = default;

uint8_t Pdu::GetProtocolVersion() const { return protocol_version_; }

void Pdu::SetProtocolVersion(uint8_t value) { protocol_version_ = value; }

uint8_t Pdu::GetExerciseId() const { return exercise_id_; }

void Pdu::SetExerciseId(uint8_t value) { exercise_id_ = value; }

uint8_t Pdu::GetPduType() const { return pdu_type_; }

void Pdu::SetPduType(uint8_t value) { pdu_type_ = value; }

uint8_t Pdu::GetProtocolFamily() const { return protocol_family_; }

void Pdu::SetProtocolFamily(uint8_t value) { protocol_family_ = value; }

uint32_t Pdu::GetTimestamp() const { return timestamp_; }

void Pdu::SetTimestamp(uint32_t value) { timestamp_ = value; }

uint16_t Pdu::GetLength() const { return this->GetMarshalledSize(); }

void Pdu::SetLength(uint16_t value) { length_ = value; }

int16_t Pdu::GetPadding() const { return padding_; }

void Pdu::SetPadding(int16_t value) { padding_ = value; }

void Pdu::Marshal(DataStream& data_stream) const {
  data_stream << protocol_version_;
  data_stream << exercise_id_;
  data_stream << pdu_type_;
  data_stream << protocol_family_;
  data_stream << timestamp_;
  data_stream << length_;
  data_stream << padding_;
}

void Pdu::Unmarshal(DataStream& data_stream) {
  data_stream >> protocol_version_;
  data_stream >> exercise_id_;
  data_stream >> pdu_type_;
  data_stream >> protocol_family_;
  data_stream >> timestamp_;
  data_stream >> length_;
  data_stream >> padding_;
}

bool Pdu::operator==(const Pdu& rhs) const {
  bool ivars_equal = true;

  if (!(protocol_version_ == rhs.protocol_version_)) {
    ivars_equal = false;
  }
  if (!(exercise_id_ == rhs.exercise_id_)) {
    ivars_equal = false;
  }
  if (!(pdu_type_ == rhs.pdu_type_)) {
    ivars_equal = false;
  }
  if (!(protocol_family_ == rhs.protocol_family_)) {
    ivars_equal = false;
  }
  if (!(timestamp_ == rhs.timestamp_)) {
    ivars_equal = false;
  }
  if (!(length_ == rhs.length_)) {
    ivars_equal = false;
  }
  if (!(padding_ == rhs.padding_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Pdu::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(protocol_version_) + sizeof(exercise_id_) +
                        sizeof(pdu_type_) + sizeof(protocol_family_) +
                        sizeof(timestamp_) + sizeof(length_) + sizeof(padding_);
  return marshal_size;
}

}  // namespace dis
