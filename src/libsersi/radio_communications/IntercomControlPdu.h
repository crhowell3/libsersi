#pragma once

#include <vector>

#include "libsersi/common/EntityID.h"
#include "libsersi/radio_communications/IntercomCommunicationsParameters.h"
#include "libsersi/radio_communications/RadioCommunicationsFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.8.5. Detailed inofrmation about the state of an intercom device
// and the actions it is requestion         of another intercom device, or the
// response to a requested action. Required manual intervention to fix the
// intercom parameters,        which can be of varialbe length. UNFINSISHED

class IntercomControlPdu final : public RadioCommunicationsFamilyPdu {
 private:
  /** control type */
  uint8_t control_type_;

  /** control type */
  uint8_t communications_channel_type_;

  /** Source entity ID */
  EntityID source_entity_id_;

  /** The specific intercom device being simulated within an entity. */
  uint8_t source_communications_device_id_;

  /** Line number to which the intercom control refers */
  uint8_t source_line_id_;

  /** priority of this message relative to transmissons from other intercom
   * devices */
  uint8_t transmit_priority_;

  /** current transmit state of the line */
  uint8_t transmit_line_state_;

  /** detailed type requested. */
  uint8_t command_;

  /** eid of the entity that has created this intercom channel. */
  EntityID master_entity_id_;

  /** specific intercom device that has created this intercom channel */
  uint16_t master_communications_device_id_;

  /** number of intercom parameters */
  uint32_t intercom_parameters_length_;

  /** ^^^This is wrong--the length of the data field is variable. Using a long
   * for now. */
  std::vector<IntercomCommunicationsParameters> intercom_parameters_;

 public:
  IntercomControlPdu();
  ~IntercomControlPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint8_t GetControlType() const;
  void SetControlType(uint8_t value);

  [[nodiscard]] uint8_t GetCommunicationsChannelType() const;
  void SetCommunicationsChannelType(uint8_t value);

  EntityID& GetSourceEntityId();
  [[nodiscard]] const EntityID& GetSourceEntityId() const;
  void SetSourceEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetSourceCommunicationsDeviceId() const;
  void SetSourceCommunicationsDeviceId(uint8_t value);

  [[nodiscard]] uint8_t GetSourceLineId() const;
  void SetSourceLineId(uint8_t value);

  [[nodiscard]] uint8_t GetTransmitPriority() const;
  void SetTransmitPriority(uint8_t value);

  [[nodiscard]] uint8_t GetTransmitLineState() const;
  void SetTransmitLineState(uint8_t value);

  [[nodiscard]] uint8_t GetCommand() const;
  void SetCommand(uint8_t value);

  EntityID& GetMasterEntityId();
  [[nodiscard]] const EntityID& GetMasterEntityId() const;
  void SetMasterEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetMasterCommunicationsDeviceId() const;
  void SetMasterCommunicationsDeviceId(uint16_t value);

  [[nodiscard]] uint32_t GetIntercomParametersLength() const;

  std::vector<IntercomCommunicationsParameters>& GetIntercomParameters();
  [[nodiscard]] const std::vector<IntercomCommunicationsParameters>&
  GetIntercomParameters() const;
  void SetIntercomParameters(
      const std::vector<IntercomCommunicationsParameters>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const IntercomControlPdu& rhs) const;
};
}  // namespace dis
