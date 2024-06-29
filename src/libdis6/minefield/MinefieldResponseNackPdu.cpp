#include "dis6/minefield/MinefieldResponseNackPdu.h"

namespace dis {
MinefieldResponseNackPdu::MinefieldResponseNackPdu()
    : request_id_(0), number_of_missing_pdus_(0) {
  SetPduType(40);
}

MinefieldResponseNackPdu::~MinefieldResponseNackPdu() {
  missing_pdu_sequence_numbers_.clear();
}

EntityID& MinefieldResponseNackPdu::GetMinefieldId() { return minefield_id_; }

const EntityID& MinefieldResponseNackPdu::GetMinefieldId() const {
  return minefield_id_;
}

void MinefieldResponseNackPdu::SetMinefieldId(const EntityID& value) {
  minefield_id_ = value;
}

EntityID& MinefieldResponseNackPdu::GetRequestingEntityId() {
  return requesting_entity_id_;
}

const EntityID& MinefieldResponseNackPdu::GetRequestingEntityId() const {
  return requesting_entity_id_;
}

void MinefieldResponseNackPdu::SetRequestingEntityId(const EntityID& value) {
  requesting_entity_id_ = value;
}

uint8_t MinefieldResponseNackPdu::GetRequestId() const { return request_id_; }

void MinefieldResponseNackPdu::SetRequestId(uint8_t value) {
  request_id_ = value;
}

uint8_t MinefieldResponseNackPdu::GetNumberOfMissingPdus() const {
  return missing_pdu_sequence_numbers_.size();
}

std::vector<uint64_t>&
MinefieldResponseNackPdu::GetMissingPduSequenceNumbers() {
  return missing_pdu_sequence_numbers_;
}

const std::vector<uint64_t>&
MinefieldResponseNackPdu::GetMissingPduSequenceNumbers() const {
  return missing_pdu_sequence_numbers_;
}

void MinefieldResponseNackPdu::SetMissingPduSequenceNumbers(
    const std::vector<uint64_t>& value) {
  missing_pdu_sequence_numbers_ = value;
}

void MinefieldResponseNackPdu::Marshal(DataStream& data_stream) const {
  MinefieldFamilyPdu::Marshal(data_stream);
  minefield_id_.Marshal(data_stream);
  requesting_entity_id_.Marshal(data_stream);
  data_stream << request_id_;
  data_stream << static_cast<uint8_t>(missing_pdu_sequence_numbers_.size());

  for (uint64_t x : missing_pdu_sequence_numbers_) {
    data_stream << x;
  }
}

void MinefieldResponseNackPdu::Unmarshal(DataStream& data_stream) {
  MinefieldFamilyPdu::Unmarshal(data_stream);
  minefield_id_.Unmarshal(data_stream);
  requesting_entity_id_.Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> number_of_missing_pdus_;

  missing_pdu_sequence_numbers_.clear();
  for (std::size_t idx = 0; idx < number_of_missing_pdus_; idx++) {
    uint64_t x;
    data_stream >> x;
    missing_pdu_sequence_numbers_.push_back(x);
  }
}

bool MinefieldResponseNackPdu::operator==(
    const MinefieldResponseNackPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = MinefieldFamilyPdu::operator==(rhs);

  if (!(minefield_id_ == rhs.minefield_id_)) {
    ivars_equal = false;
  }
  if (!(requesting_entity_id_ == rhs.requesting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < missing_pdu_sequence_numbers_.size(); idx++) {
    if (!(missing_pdu_sequence_numbers_[idx] ==
          rhs.missing_pdu_sequence_numbers_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t MinefieldResponseNackPdu::GetMarshalledSize() const {
  std::size_t marshal_size = MinefieldFamilyPdu::GetMarshalledSize() +
                             minefield_id_.GetMarshalledSize() +
                             requesting_entity_id_.GetMarshalledSize() +
                             sizeof(request_id_) +
                             sizeof(number_of_missing_pdus_);

  for (uint64_t list_element : missing_pdu_sequence_numbers_) {
    marshal_size += sizeof(list_element);
  }

  return marshal_size;
}

}  // namespace dis
