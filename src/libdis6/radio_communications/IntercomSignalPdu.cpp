#include "libdis6/radio_communications/IntercomSignalPdu.h"

namespace dis {
IntercomSignalPdu::IntercomSignalPdu()
    : communications_device_id_(0),
      encoding_scheme_(0),
      tdl_type_(0),
      sample_rate_(0),
      data_length_(0),
      samples_(0) {
  SetPduType(31);
}

IntercomSignalPdu::~IntercomSignalPdu() { data_.clear(); }

EntityID& IntercomSignalPdu::GetEntityId() { return entity_id_; }

const EntityID& IntercomSignalPdu::GetEntityId() const { return entity_id_; }

void IntercomSignalPdu::SetEntityId(const EntityID& value) {
  entity_id_ = value;
}

uint16_t IntercomSignalPdu::GetCommunicationsDeviceId() const {
  return communications_device_id_;
}

void IntercomSignalPdu::SetCommunicationsDeviceId(uint16_t value) {
  communications_device_id_ = value;
}

uint16_t IntercomSignalPdu::GetEncodingScheme() const {
  return encoding_scheme_;
}

void IntercomSignalPdu::SetEncodingScheme(uint16_t value) {
  encoding_scheme_ = value;
}

uint16_t IntercomSignalPdu::GetTdlType() const { return tdl_type_; }

void IntercomSignalPdu::SetTdlType(uint16_t value) { tdl_type_ = value; }

uint32_t IntercomSignalPdu::GetSampleRate() const { return sample_rate_; }

void IntercomSignalPdu::SetSampleRate(uint32_t value) { sample_rate_ = value; }

uint16_t IntercomSignalPdu::GetDataLength() const { return data_.size(); }

uint16_t IntercomSignalPdu::GetSamples() const { return samples_; }

void IntercomSignalPdu::SetSamples(uint16_t value) { samples_ = value; }

std::vector<uint8_t>& IntercomSignalPdu::GetData() { return data_; }

const std::vector<uint8_t>& IntercomSignalPdu::GetData() const { return data_; }

void IntercomSignalPdu::SetData(const std::vector<uint8_t>& value) {
  data_ = value;
}

void IntercomSignalPdu::Marshal(DataStream& data_stream) const {
  RadioCommunicationsFamilyPdu::Marshal(data_stream);
  entity_id_.Marshal(data_stream);
  data_stream << communications_device_id_;
  data_stream << encoding_scheme_;
  data_stream << tdl_type_;
  data_stream << sample_rate_;
  data_stream << static_cast<uint16_t>(data_.size());
  data_stream << samples_;

  for (const auto& byte : data_) {
    data_stream << byte;
  }
}

void IntercomSignalPdu::Unmarshal(DataStream& data_stream) {
  RadioCommunicationsFamilyPdu::Unmarshal(data_stream);
  entity_id_.Unmarshal(data_stream);
  data_stream >> communications_device_id_;
  data_stream >> encoding_scheme_;
  data_stream >> tdl_type_;
  data_stream >> sample_rate_;
  data_stream >> data_length_;
  data_stream >> samples_;

  data_.clear();
  for (auto idx = 0; idx < data_length_; idx++) {
    uint8_t x;
    data_stream >> x;
    data_.push_back(x);
  }
}

bool IntercomSignalPdu::operator==(const IntercomSignalPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = RadioCommunicationsFamilyPdu::operator==(rhs);

  if (!(entity_id_ == rhs.entity_id_)) {
    ivars_equal = false;
  }
  if (!(communications_device_id_ == rhs.communications_device_id_)) {
    ivars_equal = false;
  }
  if (!(encoding_scheme_ == rhs.encoding_scheme_)) {
    ivars_equal = false;
  }
  if (!(tdl_type_ == rhs.tdl_type_)) {
    ivars_equal = false;
  }
  if (!(sample_rate_ == rhs.sample_rate_)) {
    ivars_equal = false;
  }
  if (!(samples_ == rhs.samples_)) {
    ivars_equal = false;
  }

  ivars_equal = (data_ == rhs.data_);

  return ivars_equal;
}

std::size_t IntercomSignalPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      RadioCommunicationsFamilyPdu::GetMarshalledSize() +
      entity_id_.GetMarshalledSize() + sizeof(communications_device_id_) +
      sizeof(encoding_scheme_) + sizeof(tdl_type_) + sizeof(sample_rate_) +
      sizeof(data_length_) + sizeof(samples_) + data_.size();

  return marshal_size;
}

}  // namespace dis
