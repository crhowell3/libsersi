#include "libsersi/radio_communications/IntercomControlPdu.h"

namespace dis {
IntercomControlPdu::IntercomControlPdu()
    : control_type_(0),
      communications_channel_type_(0),
      source_communications_device_id_(0),
      source_line_id_(0),
      transmit_priority_(0),
      transmit_line_state_(0),
      command_(0),
      master_communications_device_id_(0),
      intercom_parameters_length_(0) {
  SetPduType(32);
}

IntercomControlPdu::~IntercomControlPdu() { intercom_parameters_.clear(); }

uint8_t IntercomControlPdu::GetControlType() const { return control_type_; }

void IntercomControlPdu::SetControlType(uint8_t value) {
  control_type_ = value;
}

uint8_t IntercomControlPdu::GetCommunicationsChannelType() const {
  return communications_channel_type_;
}

void IntercomControlPdu::SetCommunicationsChannelType(uint8_t value) {
  communications_channel_type_ = value;
}

EntityID& IntercomControlPdu::GetSourceEntityId() { return source_entity_id_; }

const EntityID& IntercomControlPdu::GetSourceEntityId() const {
  return source_entity_id_;
}

void IntercomControlPdu::SetSourceEntityId(const EntityID& value) {
  source_entity_id_ = value;
}

uint8_t IntercomControlPdu::GetSourceCommunicationsDeviceId() const {
  return source_communications_device_id_;
}

void IntercomControlPdu::SetSourceCommunicationsDeviceId(uint8_t value) {
  source_communications_device_id_ = value;
}

uint8_t IntercomControlPdu::GetSourceLineId() const { return source_line_id_; }

void IntercomControlPdu::SetSourceLineId(uint8_t value) {
  source_line_id_ = value;
}

uint8_t IntercomControlPdu::GetTransmitPriority() const {
  return transmit_priority_;
}

void IntercomControlPdu::SetTransmitPriority(uint8_t value) {
  transmit_priority_ = value;
}

uint8_t IntercomControlPdu::GetTransmitLineState() const {
  return transmit_line_state_;
}

void IntercomControlPdu::SetTransmitLineState(uint8_t value) {
  transmit_line_state_ = value;
}

uint8_t IntercomControlPdu::GetCommand() const { return command_; }

void IntercomControlPdu::SetCommand(uint8_t value) { command_ = value; }

EntityID& IntercomControlPdu::GetMasterEntityId() { return master_entity_id_; }

const EntityID& IntercomControlPdu::GetMasterEntityId() const {
  return master_entity_id_;
}

void IntercomControlPdu::SetMasterEntityId(const EntityID& value) {
  master_entity_id_ = value;
}

uint16_t IntercomControlPdu::GetMasterCommunicationsDeviceId() const {
  return master_communications_device_id_;
}

void IntercomControlPdu::SetMasterCommunicationsDeviceId(uint16_t value) {
  master_communications_device_id_ = value;
}

uint32_t IntercomControlPdu::GetIntercomParametersLength() const {
  return intercom_parameters_.size();
}

std::vector<IntercomCommunicationsParameters>&
IntercomControlPdu::GetIntercomParameters() {
  return intercom_parameters_;
}

const std::vector<IntercomCommunicationsParameters>&
IntercomControlPdu::GetIntercomParameters() const {
  return intercom_parameters_;
}

void IntercomControlPdu::SetIntercomParameters(
    const std::vector<IntercomCommunicationsParameters>& value) {
  intercom_parameters_ = value;
}

void IntercomControlPdu::Marshal(DataStream& data_stream) const {
  RadioCommunicationsFamilyPdu::Marshal(data_stream);
  data_stream << control_type_;
  data_stream << communications_channel_type_;
  source_entity_id_.Marshal(data_stream);
  data_stream << source_communications_device_id_;
  data_stream << source_line_id_;
  data_stream << transmit_priority_;
  data_stream << transmit_line_state_;
  data_stream << command_;
  master_entity_id_.Marshal(data_stream);
  data_stream << master_communications_device_id_;
  data_stream << static_cast<uint32_t>(intercom_parameters_.size());

  for (auto x : intercom_parameters_) {
    x.Marshal(data_stream);
  }
}

void IntercomControlPdu::Unmarshal(DataStream& data_stream) {
  RadioCommunicationsFamilyPdu::Unmarshal(data_stream);
  data_stream >> control_type_;
  data_stream >> communications_channel_type_;
  source_entity_id_.Unmarshal(data_stream);
  data_stream >> source_communications_device_id_;
  data_stream >> source_line_id_;
  data_stream >> transmit_priority_;
  data_stream >> transmit_line_state_;
  data_stream >> command_;
  master_entity_id_.Unmarshal(data_stream);
  data_stream >> master_communications_device_id_;
  data_stream >> intercom_parameters_length_;

  intercom_parameters_.clear();
  for (std::size_t idx = 0; idx < intercom_parameters_length_; idx++) {
    IntercomCommunicationsParameters x;
    x.Unmarshal(data_stream);
    intercom_parameters_.push_back(x);
  }
}

bool IntercomControlPdu::operator==(const IntercomControlPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = RadioCommunicationsFamilyPdu::operator==(rhs);

  if (!(control_type_ == rhs.control_type_)) {
    ivars_equal = false;
  }
  if (!(communications_channel_type_ == rhs.communications_channel_type_)) {
    ivars_equal = false;
  }
  if (!(source_entity_id_ == rhs.source_entity_id_)) {
    ivars_equal = false;
  }
  if (!(source_communications_device_id_ ==
        rhs.source_communications_device_id_)) {
    ivars_equal = false;
  }
  if (!(source_line_id_ == rhs.source_line_id_)) {
    ivars_equal = false;
  }
  if (!(transmit_priority_ == rhs.transmit_priority_)) {
    ivars_equal = false;
  }
  if (!(transmit_line_state_ == rhs.transmit_line_state_)) {
    ivars_equal = false;
  }
  if (!(command_ == rhs.command_)) {
    ivars_equal = false;
  }
  if (!(master_entity_id_ == rhs.master_entity_id_)) {
    ivars_equal = false;
  }
  if (!(master_communications_device_id_ ==
        rhs.master_communications_device_id_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < intercom_parameters_.size(); idx++) {
    if (!(intercom_parameters_[idx] == rhs.intercom_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t IntercomControlPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      RadioCommunicationsFamilyPdu::GetMarshalledSize() +
      sizeof(control_type_) + sizeof(communications_channel_type_) +
      source_entity_id_.GetMarshalledSize() +
      sizeof(source_communications_device_id_) + sizeof(source_line_id_) +
      sizeof(transmit_priority_) + sizeof(transmit_line_state_) +
      sizeof(command_) + master_entity_id_.GetMarshalledSize() +
      sizeof(master_communications_device_id_) +
      sizeof(intercom_parameters_length_);

  for (auto list_element : intercom_parameters_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
