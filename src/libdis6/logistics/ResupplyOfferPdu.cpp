#include "libdis6/logistics/ResupplyOfferPdu.h"

namespace dis {
ResupplyOfferPdu::ResupplyOfferPdu()
    : number_of_supply_types_(0), padding1_(0), padding2_(0) {
  SetPduType(6);
}

ResupplyOfferPdu::~ResupplyOfferPdu() { supplies_.clear(); }

EntityID& ResupplyOfferPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& ResupplyOfferPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void ResupplyOfferPdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

EntityID& ResupplyOfferPdu::GetSupplyingEntityId() {
  return supplying_entity_id_;
}

const EntityID& ResupplyOfferPdu::GetSupplyingEntityId() const {
  return supplying_entity_id_;
}

void ResupplyOfferPdu::SetSupplyingEntityId(const EntityID& value) {
  supplying_entity_id_ = value;
}

uint8_t ResupplyOfferPdu::GetNumberOfSupplyTypes() const {
  return supplies_.size();
}

int16_t ResupplyOfferPdu::GetPadding1() const { return padding1_; }

void ResupplyOfferPdu::SetPadding1(int16_t value) { padding1_ = value; }

char ResupplyOfferPdu::GetPadding2() const { return padding2_; }

void ResupplyOfferPdu::SetPadding2(char value) { padding2_ = value; }

std::vector<SupplyQuantity>& ResupplyOfferPdu::GetSupplies() {
  return supplies_;
}

const std::vector<SupplyQuantity>& ResupplyOfferPdu::GetSupplies() const {
  return supplies_;
}

void ResupplyOfferPdu::SetSupplies(const std::vector<SupplyQuantity>& value) {
  supplies_ = value;
}

void ResupplyOfferPdu::Marshal(DataStream& data_stream) const {
  LogisticsFamilyPdu::Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  supplying_entity_id_.Marshal(data_stream);
  data_stream << static_cast<uint8_t>(supplies_.size());
  data_stream << padding1_;
  data_stream << padding2_;

  for (const auto& x : supplies_) {
    x.Marshal(data_stream);
  }
}

void ResupplyOfferPdu::Unmarshal(DataStream& data_stream) {
  LogisticsFamilyPdu::Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
  supplying_entity_id_.Unmarshal(data_stream);
  data_stream >> number_of_supply_types_;
  data_stream >> padding1_;
  data_stream >> padding2_;

  supplies_.clear();
  for (std::size_t idx = 0; idx < number_of_supply_types_; idx++) {
    SupplyQuantity x;
    x.Unmarshal(data_stream);
    supplies_.push_back(x);
  }
}

bool ResupplyOfferPdu::operator==(const ResupplyOfferPdu& rhs) const {
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

std::size_t ResupplyOfferPdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             supplying_entity_id_.GetMarshalledSize() +
                             sizeof(number_of_supply_types_) +
                             sizeof(padding1_) + sizeof(padding2_);

  for (const auto& list_element : supplies_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
