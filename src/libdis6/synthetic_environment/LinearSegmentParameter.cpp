#include "libdis6/synthetic_environment/LinearSegmentParameter.h"

#include <cstdint>

namespace dis {
LinearSegmentParameter::LinearSegmentParameter()
    : segment_number_(0),
      segment_length_(0),
      segment_width_(0),
      segment_height_(0),
      segment_depth_(0),
      pad1_(0) {}

uint8_t LinearSegmentParameter::GetSegmentNumber() const {
  return segment_number_;
}

void LinearSegmentParameter::SetSegmentNumber(uint8_t value) {
  segment_number_ = value;
}

uint16_t LinearSegmentParameter::GetGeneralSegmentAppearance() const {
  return general_segment_appearance_;
}

void LinearSegmentParameter::SetGeneralSegmentAppearance(uint16_t value) {
  general_segment_appearance_ = value;
}

uint32_t LinearSegmentParameter::GetSpecificSegmentAppearance() const {
  return specific_segment_appearance_;
}

void LinearSegmentParameter::SetSpecificSegmentAppearance(uint32_t value) {
  specific_segment_appearance_ = value;
}

Vector3Double& LinearSegmentParameter::GetLocation() { return location_; }

const Vector3Double& LinearSegmentParameter::GetLocation() const {
  return location_;
}

void LinearSegmentParameter::SetLocation(const Vector3Double& value) {
  location_ = value;
}

Orientation& LinearSegmentParameter::GetOrientation() { return orientation_; }

const Orientation& LinearSegmentParameter::GetOrientation() const {
  return orientation_;
}

void LinearSegmentParameter::SetOrientation(const Orientation& value) {
  orientation_ = value;
}

uint16_t LinearSegmentParameter::GetSegmentLength() const {
  return segment_length_;
}

void LinearSegmentParameter::SetSegmentLength(uint16_t value) {
  segment_length_ = value;
}

uint16_t LinearSegmentParameter::GetSegmentWidth() const {
  return segment_width_;
}

void LinearSegmentParameter::SetSegmentWidth(uint16_t value) {
  segment_width_ = value;
}

uint16_t LinearSegmentParameter::GetSegmentHeight() const {
  return segment_height_;
}

void LinearSegmentParameter::SetSegmentHeight(uint16_t value) {
  segment_height_ = value;
}

uint16_t LinearSegmentParameter::GetSegmentDepth() const {
  return segment_depth_;
}

void LinearSegmentParameter::SetSegmentDepth(uint16_t value) {
  segment_depth_ = value;
}

uint32_t LinearSegmentParameter::GetPad1() const { return pad1_; }

void LinearSegmentParameter::SetPad1(uint32_t value) { pad1_ = value; }

void LinearSegmentParameter::Marshal(DataStream& data_stream) const {
  data_stream << segment_number_;
  data_stream << general_segment_appearance_;
  data_stream << specific_segment_appearance_;
  location_.Marshal(data_stream);
  orientation_.Marshal(data_stream);
  data_stream << segment_length_;
  data_stream << segment_width_;
  data_stream << segment_height_;
  data_stream << segment_depth_;
  data_stream << pad1_;
}

void LinearSegmentParameter::Unmarshal(DataStream& data_stream) {
  data_stream >> segment_number_;
  data_stream >> general_segment_appearance_;
  data_stream >> specific_segment_appearance_;
  location_.Unmarshal(data_stream);
  orientation_.Unmarshal(data_stream);
  data_stream >> segment_length_;
  data_stream >> segment_width_;
  data_stream >> segment_height_;
  data_stream >> segment_depth_;
  data_stream >> pad1_;
}

bool LinearSegmentParameter::operator==(
    const LinearSegmentParameter& rhs) const {
  bool ivars_equal = true;

  if (!(segment_number_ == rhs.segment_number_)) {
    ivars_equal = false;
  }
  if (!(general_segment_appearance_ == rhs.general_segment_appearance_)) {
    ivars_equal = false;
  }
  if (!(specific_segment_appearance_ == rhs.specific_segment_appearance_)) {
    ivars_equal = false;
  }
  if (!(location_ == rhs.location_)) {
    ivars_equal = false;
  }
  if (!(orientation_ == rhs.orientation_)) {
    ivars_equal = false;
  }
  if (!(segment_length_ == rhs.segment_length_)) {
    ivars_equal = false;
  }
  if (!(segment_width_ == rhs.segment_width_)) {
    ivars_equal = false;
  }
  if (!(segment_height_ == rhs.segment_height_)) {
    ivars_equal = false;
  }
  if (!(segment_depth_ == rhs.segment_depth_)) {
    ivars_equal = false;
  }
  if (!(pad1_ == rhs.pad1_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t LinearSegmentParameter::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(segment_number_) + sizeof(general_segment_appearance_) +
      sizeof(specific_segment_appearance_) + location_.GetMarshalledSize() +
      orientation_.GetMarshalledSize() + sizeof(segment_length_) +
      sizeof(segment_width_) + sizeof(segment_height_) +
      sizeof(segment_depth_) + sizeof(pad1_);
  return marshal_size;
}

}  // namespace dis
