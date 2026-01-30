#pragma once

#include <cstddef>

#include "utils/ByteBuffer.hpp"
#include "common/Result.hpp"

namespace dis {
// Section 5.2.18. Identifies a unique event in a simulation via the combination
// of three values

class EventID {
 private:
  /** The site ID */
  uint16_t site_;

  /** The application ID */
  uint16_t application_;

  /** the number of the event */
  uint16_t event_number_;

 public:
  EventID();
  ~EventID() = default;

  Result<void, std::string> Marshal(dis::ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(dis::ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetSite() const;
  void SetSite(uint16_t value);

  [[nodiscard]] uint16_t GetApplication() const;
  void SetApplication(uint16_t value);

  [[nodiscard]] uint16_t GetEventNumber() const;
  void SetEventNumber(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const EventID& rhs) const;
};
}  // namespace dis
