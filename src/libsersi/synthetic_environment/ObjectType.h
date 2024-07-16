#pragma once

#include <cstdint>

#include "libsersi/utils/DataStream.h"

namespace dis {
// Identifies type of object. This is a int16_ter version of EntityType that
// omits the specific and extra fields.

class ObjectType {
 private:
  /** Kind of entity */
  uint8_t entity_kind_;

  /** Domain of entity (air, surface, subsurface, space, etc) */
  uint8_t domain_;

  /** country to which the design of the entity is attributed */
  uint16_t country_;

  /** category of entity */
  uint8_t category_;

  /** subcategory of entity */
  uint8_t subcategory_;

 public:
  ObjectType();
  ~ObjectType() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetEntityKind() const;
  void SetEntityKind(uint8_t value);

  [[nodiscard]] uint8_t GetDomain() const;
  void SetDomain(uint8_t value);

  [[nodiscard]] uint16_t GetCountry() const;
  void SetCountry(uint16_t value);

  [[nodiscard]] uint8_t GetCategory() const;
  void SetCategory(uint8_t value);

  [[nodiscard]] uint8_t GetSubcategory() const;
  void SetSubcategory(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ObjectType& rhs) const;
};
}  // namespace dis
