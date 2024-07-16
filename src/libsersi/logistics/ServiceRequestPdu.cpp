#include "libsersi/logistics/ServiceRequestPdu.h"

namespace dis {
ServiceRequestPdu::ServiceRequestPdu()
    : service_type_requested_(0),
      number_of_supply_types_(0),
      service_request_padding_(0) {
  SetPduType(5);
}

ServiceRequestPdu::~ServiceRequestPdu() { supplies_.clear(); }

EntityID& ServiceRequestPdu::GetRequestingEntityId() {
  return requesting_entity_id_;
}

const EntityID& ServiceRequestPdu::GetRequestingEntityId() const {
  return requesting_entity_id_;
}

void ServiceRequestPdu::SetRequestingEntityId(const EntityID& value) {
  requesting_entity_id_ = value;
}

EntityID& ServiceRequestPdu::GetServicingEntityId() {
  return servicing_entity_id_;
}

const EntityID& ServiceRequestPdu::GetServicingEntityId() const {
  return servicing_entity_id_;
}

void ServiceRequestPdu::SetServicingEntityId(const EntityID& value) {
  servicing_entity_id_ = value;
}

uint8_t ServiceRequestPdu::GetServiceTypeRequested() const {
  return service_type_requested_;
}

void ServiceRequestPdu::SetServiceTypeRequested(uint8_t value) {
  service_type_requested_ = value;
}

uint8_t ServiceRequestPdu::GetNumberOfSupplyTypes() const {
  return supplies_.size();
}

int16_t ServiceRequestPdu::GetServiceRequestPadding() const {
  return service_request_padding_;
}

void ServiceRequestPdu::SetServiceRequestPadding(int16_t value) {
  service_request_padding_ = value;
}

std::vector<SupplyQuantity>& ServiceRequestPdu::GetSupplies() {
  return supplies_;
}

const std::vector<SupplyQuantity>& ServiceRequestPdu::GetSupplies() const {
  return supplies_;
}

void ServiceRequestPdu::SetSupplies(const std::vector<SupplyQuantity>& value) {
  supplies_ = value;
}

void ServiceRequestPdu::Marshal(DataStream& data_stream) const {
  LogisticsFamilyPdu::Marshal(data_stream);
  requesting_entity_id_.Marshal(data_stream);
  servicing_entity_id_.Marshal(data_stream);
  data_stream << service_type_requested_;
  data_stream << static_cast<uint8_t>(supplies_.size());
  data_stream << service_request_padding_;

  for (const auto& x : supplies_) {
    x.Marshal(data_stream);
  }
}

void ServiceRequestPdu::Unmarshal(DataStream& data_stream) {
  LogisticsFamilyPdu::Unmarshal(data_stream);
  requesting_entity_id_.Unmarshal(data_stream);
  servicing_entity_id_.Unmarshal(data_stream);
  data_stream >> service_type_requested_;
  data_stream >> number_of_supply_types_;
  data_stream >> service_request_padding_;

  supplies_.clear();
  for (std::size_t idx = 0; idx < number_of_supply_types_; idx++) {
    SupplyQuantity x;
    x.Unmarshal(data_stream);
    supplies_.push_back(x);
  }
}

bool ServiceRequestPdu::operator==(const ServiceRequestPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = LogisticsFamilyPdu::operator==(rhs);

  if (!(requesting_entity_id_ == rhs.requesting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(servicing_entity_id_ == rhs.servicing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(service_type_requested_ == rhs.service_type_requested_)) {
    ivars_equal = false;
  }
  if (!(service_request_padding_ == rhs.service_request_padding_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < supplies_.size(); idx++) {
    if (!(supplies_[idx] == rhs.supplies_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ServiceRequestPdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             requesting_entity_id_.GetMarshalledSize() +
                             servicing_entity_id_.GetMarshalledSize() +
                             sizeof(service_type_requested_) +
                             sizeof(number_of_supply_types_) +
                             sizeof(service_request_padding_);

  for (const auto& list_element : supplies_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
