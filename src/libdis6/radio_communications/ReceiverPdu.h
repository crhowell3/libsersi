#pragma once

#include <cstddef>

#include "libdis6/common/EntityID.h"
#include "libdis6/radio_communications/RadioCommunicationsFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.8.3. Communication of a receiver state. COMPLETE

class ReceiverPdu final : public RadioCommunicationsFamilyPdu {
 private:
  /** encoding scheme used, and enumeration */
  uint16_t receiver_state_;

  /** padding */
  uint16_t padding1_;

  /** received power */
  float received_power_;

  /** ID of transmitter */
  EntityID transmitter_entity_id_;

  /** ID of transmitting radio */
  uint16_t transmitter_radio_id_;

 public:
  ReceiverPdu();
  ~ReceiverPdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint16_t GetReceiverState() const;
  void SetReceiverState(uint16_t value);

  [[nodiscard]] uint16_t GetPadding1() const;
  void SetPadding1(uint16_t value);

  [[nodiscard]] float GetReceivedPower() const;
  void SetReceivedPower(float value);

  EntityID& GetTransmitterEntityId();
  [[nodiscard]] const EntityID& GetTransmitterEntityId() const;
  void SetTransmitterEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetTransmitterRadioId() const;
  void SetTransmitterRadioId(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const ReceiverPdu& rhs) const;
};
}  // namespace dis
