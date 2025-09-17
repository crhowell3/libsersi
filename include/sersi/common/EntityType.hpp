#pragma once

#include <cstddef>

#include "sersi/utils/DataStream.hpp"

namespace dis {
// Section 5.2.16. Identifies the type of entity, including kind of entity,
// domain (surface, subsurface, air, etc) country, category, etc.

class EntityType {
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

  /** specific info based on subcategory field */
  uint8_t specific_;

  uint8_t extra_;

 public:
   EntityType() = default;
   ~EntityType() = default;

   void Marshal(DataStream &data_stream) const {
    data_stream << entity_kind_;
    data_stream << domain_;
    data_stream << country_;
    data_stream << category_;
    data_stream << subcategory_;
    data_stream << specific_;
    data_stream << extra_;
   }
   void Unmarshal(DataStream &data_stream) {
    data_stream >> entity_kind_;
    data_stream >> domain_;
    data_stream >> country_;
    data_stream >> category_;
    data_stream >> subcategory_;
    data_stream >> specific_;
    data_stream >> extra_;
   }

   [[nodiscard]] auto GetEntityKind() const -> uint8_t {
    return entity_kind_;
   }
   void SetEntityKind(uint8_t value) {
    entity_kind_ = value;
   }

   [[nodiscard]] auto GetDomain() const -> uint8_t {
    return domain_;
   }
   void SetDomain(uint8_t value) {
    domain_ = value;
   }

   [[nodiscard]] auto GetCountry() const -> uint16_t {
    return country_;
   }
   void SetCountry(uint16_t value) {
    country_ = value;
   }

   [[nodiscard]] auto GetCategory() const -> uint8_t {
    return category_;
   }
   void SetCategory(uint8_t value) {
    category_ = value;
   }

   [[nodiscard]] auto GetSubcategory() const -> uint8_t {
    return subcategory_;
   }
   void SetSubcategory(uint8_t value) {
    subcategory_ = value;
   }

   [[nodiscard]] auto GetSpecific() const -> uint8_t {
    return specific_;
   }
   void SetSpecific(uint8_t value) {
    specific_ = value;
   }

   [[nodiscard]] auto GetExtra() const -> uint8_t {
    return extra_;
   }
   void SetExtra(uint8_t value) {
    extra_ = value;
   }

   [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(entity_kind_) + sizeof(domain_) + sizeof(country_) +
           sizeof(category_) + sizeof(subcategory_) + sizeof(specific_) +
           sizeof(extra_);
   }

   auto operator==(const EntityType &rhs) const -> bool {
    return entity_kind_ == rhs.entity_kind_ && domain_ == rhs.domain_ &&
           country_ == rhs.country_ && category_ == rhs.category_ &&
           subcategory_ == rhs.subcategory_ && specific_ == rhs.specific_ &&
           extra_ == rhs.extra_;
   }
};
}  // namespace dis
