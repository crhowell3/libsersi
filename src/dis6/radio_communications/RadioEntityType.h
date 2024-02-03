#pragma once

#include <cstddef>

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.25. Identifies the type of radio

class RadioEntityType {
 private:
  /** Kind of entity */
  uint8_t entity_kind_;

  /** Domain of entity (air, surface, subsurface, space, etc) */
  uint8_t domain_;

  /** country to which the design of the entity is attributed */
  uint16_t country_;

  /** category of entity */
  uint8_t category_;

  /** specific info based on subcategory field */
  uint8_t nomenclature_version_;

  uint16_t nomenclature_;

 public:
  RadioEntityType();
  ~RadioEntityType();

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

  [[nodiscard]] uint8_t GetNomenclatureVersion() const;
  void SetNomenclatureVersion(uint8_t value);

  [[nodiscard]] uint16_t GetNomenclature() const;
  void SetNomenclature(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const RadioEntityType& rhs) const;
};
}  // namespace dis
