#pragma once

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.38. Identifies the type of aggregate including kind of entity,
// domain (surface, subsurface, air, etc) country, category, etc.

class AggregateType {
 private:
  /** Kind of entity */
  uint8_t aggregate_kind_;

  /** Domain of entity (air, surface, subsurface, space, etc) */
  uint8_t domain_;

  /** country to which the design of the entity is attributed */
  uint16_t country_;

  /** category of entity */
  uint8_t category_;

  /** subcategory of entity */
  uint8_t subcategory_;

  /** specific info based on subcategory field */
  uint8_t specific_;

  uint8_t extra_;

 public:
  AggregateType();
  ~AggregateType() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetAggregateKind() const;
  void SetAggregateKind(uint8_t value);

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

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AggregateType& rhs) const;
};
}  // namespace dis
