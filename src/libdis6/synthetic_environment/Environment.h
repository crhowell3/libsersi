#pragma once

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.40. Information about a geometry, a state associated with a
// geometry, a bounding volume, or an associated entity ID. NOTE: this class
// requires hand coding.

class Environment {
 private:
  /** Record type */
  uint32_t environment_type_;

  /** length, in bits */
  uint8_t length_;

  /** Identify the sequentially numbered record index */
  uint8_t index_;

  /** padding */
  uint8_t padding1_;

  /** Geometry or state record */
  uint8_t geometry_;

  /** padding to bring the total size up to a 64 bit boundry */
  uint8_t padding2_;

 public:
  Environment();
  ~Environment() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint32_t GetEnvironmentType() const;
  void SetEnvironmentType(uint32_t value);

  [[nodiscard]] uint8_t GetLength() const;
  void SetLength(uint8_t value);

  [[nodiscard]] uint8_t GetIndex() const;
  void SetIndex(uint8_t value);

  [[nodiscard]] uint8_t GetPadding1() const;
  void SetPadding1(uint8_t value);

  [[nodiscard]] uint8_t GetGeometry() const;
  void SetGeometry(uint8_t value);

  [[nodiscard]] uint8_t GetPadding2() const;
  void SetPadding2(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Environment& rhs) const;
};
}  // namespace dis
