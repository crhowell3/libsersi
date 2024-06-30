#pragma once

#include <cstddef>

#include "libdis6/utils/DataStream.h"

namespace dis {
// 5.2.47.  Layer header.

class LayerHeader {
 private:
  /** Layer number */
  uint8_t layer_number_;

  /** Layer speccific information enumeration */
  uint8_t layer_specific_information_;

  /** information length */
  uint16_t length_;

 public:
  LayerHeader();
  ~LayerHeader() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetLayerNumber() const;
  void SetLayerNumber(uint8_t value);

  [[nodiscard]] uint8_t GetLayerSpecificInformation() const;
  void SetLayerSpecificInformation(uint8_t value);

  [[nodiscard]] uint16_t GetLength() const;
  void SetLength(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const LayerHeader& rhs) const;
};
}  // namespace dis
