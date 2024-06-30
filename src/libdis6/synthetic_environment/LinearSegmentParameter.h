#pragma once

#include "libdis6/common/Orientation.h"
#include "libdis6/common/Vector3Double.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// 5.2.48: Linear segment parameters

class LinearSegmentParameter {
 private:
  /** number of segments */
  uint8_t segment_number_;

  /// General segment appearance
  uint16_t general_segment_appearance_;

  /// Specific segment appearance
  uint32_t specific_segment_appearance_;

  /** location */
  Vector3Double location_;

  /** orientation */
  Orientation orientation_;

  /** segmentLength */
  uint16_t segment_length_;

  /** segmentWidth */
  uint16_t segment_width_;

  /** segmentHeight */
  uint16_t segment_height_;

  /** segment Depth */
  uint16_t segment_depth_;

  /** segment Depth */
  uint32_t pad1_;

 public:
  LinearSegmentParameter();
  ~LinearSegmentParameter() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetSegmentNumber() const;
  void SetSegmentNumber(uint8_t value);

  [[nodiscard]] uint16_t GetGeneralSegmentAppearance() const;
  void SetGeneralSegmentAppearance(uint16_t value);

  [[nodiscard]] uint32_t GetSpecificSegmentAppearance() const;
  void SetSpecificSegmentAppearance(uint32_t value);

  Vector3Double& GetLocation();
  [[nodiscard]] const Vector3Double& GetLocation() const;
  void SetLocation(const Vector3Double& value);

  Orientation& GetOrientation();
  [[nodiscard]] const Orientation& GetOrientation() const;
  void SetOrientation(const Orientation& value);

  [[nodiscard]] uint16_t GetSegmentLength() const;
  void SetSegmentLength(uint16_t value);

  [[nodiscard]] uint16_t GetSegmentWidth() const;
  void SetSegmentWidth(uint16_t value);

  [[nodiscard]] uint16_t GetSegmentHeight() const;
  void SetSegmentHeight(uint16_t value);

  [[nodiscard]] uint16_t GetSegmentDepth() const;
  void SetSegmentDepth(uint16_t value);

  [[nodiscard]] uint32_t GetPad1() const;
  void SetPad1(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const LinearSegmentParameter& rhs) const;
};
}  // namespace dis
