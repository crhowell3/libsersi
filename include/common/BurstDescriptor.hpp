#pragma once

#include "common/data_types/EntityType.hpp"
#include "utils/ByteBuffer.hpp"
#include "common/Result.hpp"

namespace dis {
// Section 5.2.7. Specifies the type of muntion fired, the type of warhead, the
// type of fuse, the number of rounds fired, and the rate at which the roudns
// are fired in rounds per minute.

class BurstDescriptor {
 private:
  /** What munition was used in the burst */
  EntityType munition_;

  /** type of warhead */
  uint16_t warhead_;

  /** type of fuse used */
  uint16_t fuse_;

  /** how many of the munition were fired */
  uint16_t quantity_;

  /** rate at which the munition was fired */
  uint16_t rate_;

 public:
  BurstDescriptor();
  ~BurstDescriptor() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  EntityType& GetMunition();
  [[nodiscard]] const EntityType& GetMunition() const;
  void SetMunition(const EntityType& value);

  [[nodiscard]] uint16_t GetWarhead() const;
  void SetWarhead(uint16_t value);

  [[nodiscard]] uint16_t GetFuse() const;
  void SetFuse(uint16_t value);

  [[nodiscard]] uint16_t GetQuantity() const;
  void SetQuantity(uint16_t value);

  [[nodiscard]] uint16_t GetRate() const;
  void SetRate(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const BurstDescriptor& rhs) const;
};
}  // namespace dis
