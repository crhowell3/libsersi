#include "libsersi/radio_communications/SignalPdu.h"

#include <cstddef>

namespace dis {
SignalPdu::SignalPdu()
    : encoding_scheme_(0),
      tdl_type_(0),
      sample_rate_(0),
      data_length_(0),
      samples_(0) {
  SetPduType(26);
}

SignalPdu::~SignalPdu() { data_.clear(); }

uint16_t SignalPdu::GetEncodingScheme() const { return encoding_scheme_; }

void SignalPdu::SetEncodingScheme(uint16_t value) { encoding_scheme_ = value; }

uint16_t SignalPdu::GetTdlType() const { return tdl_type_; }

void SignalPdu::SetTdlType(uint16_t value) { tdl_type_ = value; }

uint32_t SignalPdu::GetSampleRate() const { return sample_rate_; }

void SignalPdu::SetSampleRate(uint32_t value) { sample_rate_ = value; }

int16_t SignalPdu::GetDataLength() const {
  return static_cast<int16_t>(data_.size());
}

int16_t SignalPdu::GetSamples() const { return samples_; }

void SignalPdu::SetSamples(int16_t value) { samples_ = value; }

std::vector<uint8_t>& SignalPdu::GetData() { return data_; }

const std::vector<uint8_t>& SignalPdu::GetData() const { return data_; }

void SignalPdu::SetData(const std::vector<uint8_t>& value) { data_ = value; }

void SignalPdu::Marshal(ByteBuffer& byte_buffer) const {
  RadioCommunicationsFamilyPdu::Marshal(byte_buffer);
  byte_buffer << encoding_scheme_;
  byte_buffer << tdl_type_;
  byte_buffer << sample_rate_;
  byte_buffer << static_cast<int16_t>(data_.size());
  byte_buffer << samples_;
  for (auto byte : data_) {
    byte_buffer << byte;
  }
}

void SignalPdu::Unmarshal(ByteBuffer& byte_buffer) {
  RadioCommunicationsFamilyPdu::Unmarshal(byte_buffer);
  byte_buffer >> encoding_scheme_;
  byte_buffer >> tdl_type_;
  byte_buffer >> sample_rate_;
  byte_buffer >> data_length_;
  byte_buffer >> samples_;

  data_.clear();
  for (auto idx = 0; idx < data_length_; ++idx) {
    uint8_t x;
    byte_buffer >> x;
    data_.push_back(x);
  }
}

bool SignalPdu::operator==(const SignalPdu& rhs) const {
  auto ivars_equal = true;

  ivars_equal = RadioCommunicationsFamilyPdu::operator==(rhs) &&
                encoding_scheme_ == rhs.encoding_scheme_ &&
                tdl_type_ == rhs.tdl_type_ &&
                sample_rate_ == rhs.sample_rate_ && samples_ == rhs.samples_ &&
                data_ == rhs.data_;

  return ivars_equal;
}

std::size_t SignalPdu::GetMarshalledSize() const {
  std::size_t marshal_size = RadioCommunicationsFamilyPdu::GetMarshalledSize() +
                             sizeof(encoding_scheme_) + sizeof(tdl_type_) +
                             sizeof(sample_rate_) + sizeof(data_length_) +
                             sizeof(samples_);
  marshal_size += data_.size();

  return marshal_size;
}

}  // namespace dis
