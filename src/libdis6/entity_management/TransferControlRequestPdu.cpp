#include "libdis6/entity_management/TransferControlRequestPdu.h"

namespace dis {
TransferControlRequestPdu::TransferControlRequestPdu()
    : request_id_(0),
      required_reliability_service_(0),
      transfer_type_(0),
      number_of_record_sets_(0) {
  SetPduType(35);
}

TransferControlRequestPdu::~TransferControlRequestPdu() {
  record_sets_.clear();
}

EntityID& TransferControlRequestPdu::GetOriginatingEntityId() {
  return originating_entity_id_;
}

const EntityID& TransferControlRequestPdu::GetOriginatingEntityId() const {
  return originating_entity_id_;
}

void TransferControlRequestPdu::SetOriginatingEntityId(const EntityID& value) {
  originating_entity_id_ = value;
}

EntityID& TransferControlRequestPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& TransferControlRequestPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void TransferControlRequestPdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

uint32_t TransferControlRequestPdu::GetRequestId() const { return request_id_; }

void TransferControlRequestPdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

uint8_t TransferControlRequestPdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void TransferControlRequestPdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint8_t TransferControlRequestPdu::GetTransferType() const {
  return transfer_type_;
}

void TransferControlRequestPdu::SetTransferType(uint8_t value) {
  transfer_type_ = value;
}

EntityID& TransferControlRequestPdu::GetTransferEntityId() {
  return transfer_entity_id_;
}

const EntityID& TransferControlRequestPdu::GetTransferEntityId() const {
  return transfer_entity_id_;
}

void TransferControlRequestPdu::SetTransferEntityId(const EntityID& value) {
  transfer_entity_id_ = value;
}

uint8_t TransferControlRequestPdu::GetNumberOfRecordSets() const {
  return record_sets_.size();
}

std::vector<RecordSet>& TransferControlRequestPdu::GetRecordSets() {
  return record_sets_;
}

const std::vector<RecordSet>& TransferControlRequestPdu::GetRecordSets() const {
  return record_sets_;
}

void TransferControlRequestPdu::SetRecordSets(
    const std::vector<RecordSet>& value) {
  record_sets_ = value;
}

void TransferControlRequestPdu::Marshal(DataStream& data_stream) const {
  EntityManagementFamilyPdu::Marshal(data_stream);
  originating_entity_id_.Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  data_stream << request_id_;
  data_stream << required_reliability_service_;
  data_stream << transfer_type_;
  transfer_entity_id_.Marshal(data_stream);
  data_stream << static_cast<uint8_t>(record_sets_.size());

  for (auto x : record_sets_) {
    x.Marshal(data_stream);
  }
}

void TransferControlRequestPdu::Unmarshal(DataStream& data_stream) {
  EntityManagementFamilyPdu::Unmarshal(data_stream);
  originating_entity_id_.Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> required_reliability_service_;
  data_stream >> transfer_type_;
  transfer_entity_id_.Unmarshal(data_stream);
  data_stream >> number_of_record_sets_;

  record_sets_.clear();
  for (std::size_t idx = 0; idx < number_of_record_sets_; idx++) {
    RecordSet x;
    x.Unmarshal(data_stream);
    record_sets_.push_back(x);
  }
}

bool TransferControlRequestPdu::operator==(
    const TransferControlRequestPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityManagementFamilyPdu::operator==(rhs);

  if (!(originating_entity_id_ == rhs.originating_entity_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(required_reliability_service_ == rhs.required_reliability_service_)) {
    ivars_equal = false;
  }
  if (!(transfer_type_ == rhs.transfer_type_)) {
    ivars_equal = false;
  }
  if (!(transfer_entity_id_ == rhs.transfer_entity_id_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < record_sets_.size(); idx++) {
    if (!(record_sets_[idx] == rhs.record_sets_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t TransferControlRequestPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityManagementFamilyPdu::GetMarshalledSize() +
      originating_entity_id_.GetMarshalledSize() +
      receiving_entity_id_.GetMarshalledSize() + sizeof(request_id_) +
      sizeof(required_reliability_service_) + sizeof(transfer_type_) +
      transfer_entity_id_.GetMarshalledSize() + sizeof(number_of_record_sets_);

  for (auto list_element : record_sets_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
