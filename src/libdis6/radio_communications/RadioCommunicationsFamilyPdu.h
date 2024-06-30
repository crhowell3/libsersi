#pragma once

#include <cstddef>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/Pdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.8. Abstract superclass for radio communications PDUs.

class RadioCommunicationsFamilyPdu : public Pdu {
 private:
  /** ID of the entitythat is the source of the communication */
  EntityID entity_id_;

  /** particular radio within an entity */
  uint16_t radio_id_;

 public:
  RadioCommunicationsFamilyPdu();
  ~RadioCommunicationsFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  EntityID& GetEntityId();
  [[nodiscard]] const EntityID& GetEntityId() const;
  void SetEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetRadioId() const;
  void SetRadioId(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const RadioCommunicationsFamilyPdu& rhs) const;
};
}  // namespace dis
