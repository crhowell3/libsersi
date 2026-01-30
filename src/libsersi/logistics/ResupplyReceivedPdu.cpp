#include logistics/ResupplyReceivedPdu.h"

#include <cstddef>

namespace dis {
ResupplyReceivedPdu::ResupplyReceivedPdu()
    : number_of_supply_types_(0), padding1_(0), padding2_(0) {
  SetPduType(7);
}

ResupplyReceivedPdu::~ResupplyReceivedPdu() { supplies_.clear(); }

EntityID& ResupplyReceivedPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& ResupplyReceivedPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void ResupplyReceivedPdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

EntityID& ResupplyReceivedPdu::GetSupplyingEntityId() {
  return supplying_entity_id_;
}

const EntityID& ResupplyReceivedPdu::GetSupplyingEntityId() const {
  return supplying_entity_id_;
}

void ResupplyReceivedPdu::SetSupplyingEntityId(const EntityID& value) {
  supplying_entity_id_ = value;
}

uint8_t ResupplyReceivedPdu::GetNumberOfSupplyTypes() const {
  return supplies_.size();
}

int16_t ResupplyReceivedPdu::GetPadding1() const { return padding1_; }

void ResupplyReceivedPdu::SetPadding1(int16_t value) { padding1_ = value; }

char ResupplyReceivedPdu::GetPadding2() const { return padding2_; }

void ResupplyReceivedPdu::SetPadding2(char value) { padding2_ = value; }

std::vector<SupplyQuantity>& ResupplyReceivedPdu::GetSupplies() {
  return supplies_;
}

const std::vector<SupplyQuantity>& ResupplyReceivedPdu::GetSupplies() const {
  return supplies_;
}

void ResupplyReceivedPdu::SetSupplies(
    const std::vector<SupplyQuantity>& value) {
  supplies_ = value;
}

void ResupplyReceivedPdu::Marshal(ByteBuffer& byte_buffer) const {
  LogisticsFamilyPdu::Marshal(byte_buffer);
  receiving_entity_id_.Marshal(byte_buffer);
  supplying_entity_id_.Marshal(byte_buffer);
  byte_buffer << static_cast<uint8_t>(supplies_.size());
  byte_buffer << padding1_;
  byte_buffer << padding2_;

  for (const auto& x : supplies_) {
    x.Marshal(byte_buffer);
  }
}

void ResupplyReceivedPdu::Unmarshal(ByteBuffer& byte_buffer) {
  LogisticsFamilyPdu::Unmarshal(byte_buffer);
  receiving_entity_id_.Unmarshal(byte_buffer);
  supplying_entity_id_.Unmarshal(byte_buffer);
  byte_buffer >> number_of_supply_types_;
  byte_buffer >> padding1_;
  byte_buffer >> padding2_;

  supplies_.clear();
  for (std::size_t idx = 0; idx < number_of_supply_types_; idx++) {
    SupplyQuantity x;
    x.Unmarshal(byte_buffer);
    supplies_.push_back(x);
  }
}

bool ResupplyReceivedPdu::operator==(const ResupplyReceivedPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = LogisticsFamilyPdu::operator==(rhs);

  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(supplying_entity_id_ == rhs.supplying_entity_id_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < supplies_.size(); idx++) {
    if (!(supplies_[idx] == rhs.supplies_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ResupplyReceivedPdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             supplying_entity_id_.GetMarshalledSize() +
                             sizeof(number_of_supply_types_) +
                             sizeof(padding1_) + sizeof(padding2_);

  for (const auto& list_element : supplies_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
