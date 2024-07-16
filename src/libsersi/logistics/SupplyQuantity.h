#pragma once

#include "libsersi/common/EntityType.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.30. A supply, and the amount of that supply. Similar to an entity
// kind but with the addition of a quantity.

class SupplyQuantity {
 private:
  /** Type of supply */
  EntityType supply_type_;

  /** quantity to be supplied */
  uint8_t quantity_;

 public:
  SupplyQuantity();
  ~SupplyQuantity();

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  EntityType& GetSupplyType();
  [[nodiscard]] const EntityType& GetSupplyType() const;
  void SetSupplyType(const EntityType& value);

  [[nodiscard]] uint8_t GetQuantity() const;
  void SetQuantity(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const SupplyQuantity& rhs) const;
};
}  // namespace dis
