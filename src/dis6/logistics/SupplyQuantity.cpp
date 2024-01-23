#include "dis6/logistics/SupplyQuantity.h"

namespace dis {
SupplyQuantity::SupplyQuantity() : quantity_(0) {}

SupplyQuantity::~SupplyQuantity() = default;

EntityType& SupplyQuantity::GetSupplyType() { return supply_type_; }

const EntityType& SupplyQuantity::GetSupplyType() const { return supply_type_; }

void SupplyQuantity::SetSupplyType(const EntityType& value) {
  supply_type_ = value;
}

uint8_t SupplyQuantity::GetQuantity() const { return quantity_; }

void SupplyQuantity::SetQuantity(uint8_t value) { quantity_ = value; }

void SupplyQuantity::Marshal(DataStream& data_stream) const {
  supply_type_.Marshal(data_stream);
  data_stream << quantity_;
}

void SupplyQuantity::Unmarshal(DataStream& data_stream) {
  supply_type_.Unmarshal(data_stream);
  data_stream >> quantity_;
}

bool SupplyQuantity::operator==(const SupplyQuantity& rhs) const {
  bool ivars_equal = true;

  if (!(supply_type_ == rhs.supply_type_)) {
    ivars_equal = false;
  }
  if (!(quantity_ == rhs.quantity_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t SupplyQuantity::GetMarshalledSize() const {
  std::size_t marshal_size =
      supply_type_.GetMarshalledSize() + sizeof(quantity_);
  return marshal_size;
}

}  // namespace dis
