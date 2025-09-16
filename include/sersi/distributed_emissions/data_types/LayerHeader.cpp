#include "libsersi/distributed_emissions/LayerHeader.h"

namespace dis {
LayerHeader::LayerHeader()
    : layer_number_(0), layer_specific_information_(0), length_(0) {}

uint8_t LayerHeader::GetLayerNumber() const { return layer_number_; }

void LayerHeader::SetLayerNumber(uint8_t value) { layer_number_ = value; }

uint8_t LayerHeader::GetLayerSpecificInformation() const {
  return layer_specific_information_;
}

void LayerHeader::SetLayerSpecificInformation(uint8_t value) {
  layer_specific_information_ = value;
}

uint16_t LayerHeader::GetLength() const { return length_; }

void LayerHeader::SetLength(uint16_t value) { length_ = value; }

void LayerHeader::Marshal(DataStream& data_stream) const {
  data_stream << layer_number_;
  data_stream << layer_specific_information_;
  data_stream << length_;
}

void LayerHeader::Unmarshal(DataStream& data_stream) {
  data_stream >> layer_number_;
  data_stream >> layer_specific_information_;
  data_stream >> length_;
}

bool LayerHeader::operator==(const LayerHeader& rhs) const {
  bool ivars_equal = true;

  if (!(layer_number_ == rhs.layer_number_)) {
    ivars_equal = false;
  }
  if (!(layer_specific_information_ == rhs.layer_specific_information_)) {
    ivars_equal = false;
  }
  if (!(length_ == rhs.length_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t LayerHeader::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(layer_number_) +
                             sizeof(layer_specific_information_) +
                             sizeof(length_);
  return marshal_size;
}

}  // namespace dis
