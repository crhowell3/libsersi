#pragma once

#include <cstddef>

#include "libdis6/utils/DataStream.h"

namespace dis {
// 5.2.58. Used in IFF ATC PDU

class SystemID {
 private:
  /** System Type */
  uint16_t system_type_;

  /** System name, an enumeration */
  uint16_t system_name_;

  /** System mode */
  uint8_t system_mode_;

  /** Change Options */
  uint8_t change_options_;

 public:
  SystemID();
  ~SystemID() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetSystemType() const;
  void SetSystemType(uint16_t value);

  [[nodiscard]] uint16_t GetSystemName() const;
  void SetSystemName(uint16_t value);

  [[nodiscard]] uint8_t GetSystemMode() const;
  void SetSystemMode(uint8_t value);

  [[nodiscard]] uint8_t GetChangeOptions() const;
  void SetChangeOptions(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const SystemID& rhs) const;
};

}  // namespace dis
