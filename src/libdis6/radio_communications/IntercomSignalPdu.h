#pragma once

#include <cstdint>
#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/radio_communications/RadioCommunicationsFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.8.4. Actual transmission of intercome voice data. COMPLETE

class IntercomSignalPdu final : public RadioCommunicationsFamilyPdu {
 private:
  /** entity ID */
  EntityID entity_id_;

  /** ID of communications device */
  uint16_t communications_device_id_;

  /** encoding scheme */
  uint16_t encoding_scheme_;

  /** tactical data link type */
  uint16_t tdl_type_;

  /** sample rate */
  uint32_t sample_rate_;

  /** data length */
  uint16_t data_length_;

  /** samples */
  uint16_t samples_;

  /** data bytes */
  std::vector<uint8_t> data_;

 public:
  IntercomSignalPdu();
  ~IntercomSignalPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetEntityId();
  [[nodiscard]] const EntityID& GetEntityId() const;
  void SetEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetCommunicationsDeviceId() const;
  void SetCommunicationsDeviceId(uint16_t value);

  [[nodiscard]] uint16_t GetEncodingScheme() const;
  void SetEncodingScheme(uint16_t value);

  [[nodiscard]] uint16_t GetTdlType() const;
  void SetTdlType(uint16_t value);

  [[nodiscard]] uint32_t GetSampleRate() const;
  void SetSampleRate(uint32_t value);

  [[nodiscard]] uint16_t GetDataLength() const;

  [[nodiscard]] uint16_t GetSamples() const;
  void SetSamples(uint16_t value);

  std::vector<uint8_t>& GetData();
  [[nodiscard]] const std::vector<uint8_t>& GetData() const;
  void SetData(const std::vector<uint8_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const IntercomSignalPdu& rhs) const;
};
}  // namespace dis
