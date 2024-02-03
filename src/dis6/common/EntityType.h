#pragma once

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.16. Identifies the type of entity, including kind of entity,
// domain (surface, subsurface, air, etc) country, category, etc.

class EntityType {
 private:
  /** Kind of entity */
  uint8_t entity_kind_;  // NOLINT

  /** Domain of entity (air, surface, subsurface, space, etc) */
  uint8_t domain_;  // NOLINT

  /** country to which the design of the entity is attributed */
  uint16_t country_;  // NOLINT

  /** category of entity */
  uint8_t category_;  // NOLINT

  /** subcategory of entity */
  uint8_t subcategory_;  // NOLINT

  /** specific info based on subcategory field */
  uint8_t specific_;  // NOLINT

  uint8_t extra_;  // NOLINT

 public:
  EntityType();
  virtual ~EntityType();

  virtual void Marshal(DataStream& data_stream) const;
  virtual void Unmarshal(DataStream& data_stream);

  [[nodiscard]] static uint8_t GetEntityKind();
  void SetEntityKind(uint8_t value);

  [[nodiscard]] uint8_t GetDomain() const;
  void SetDomain(uint8_t value);

  [[nodiscard]] uint16_t GetCountry() const;
  void SetCountry(uint16_t value);

  [[nodiscard]] uint8_t GetCategory() const;
  void SetCategory(uint8_t value);

  [[nodiscard]] uint8_t GetSubcategory() const;
  void SetSubcategory(uint8_t value);

  [[nodiscard]] uint8_t GetSpecific() const;
  void SetSpecific(uint8_t value);

  [[nodiscard]] uint8_t GetExtra() const;
  void SetExtra(uint8_t value);

  [[nodiscard]] virtual int GetMarshalledSize() const;

  bool operator==(const EntityType& rhs) const;
};
}  // namespace dis

