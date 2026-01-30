#pragma once

#include <vector>

#include "common/Pdu.hpp"
#include "common/data_types/EntityID.h"
#include "common/data_types/EventID.h"
#include "utils/ByteBuffer.hpp"

namespace dis {
/// Implemented according to IEEE 1278.1-2012 §7.6.2
class ElectromagneticEmissionsPdu final : public Pdu {
  FIELD(EntityID, emitting_entity_id)
  FIELD(EventID, event_id)
  FIELD(EEAttributeStateIndicator, state_update_indicator)
  FIELD(uint8_t, number_of_systems)
  FIELD(uint16_t, padding)
  FIELD(std::vector<ElectromagneticEmissionSystemData>, systems)

 public:
  ElectromagneticEmissionsPdu();
  ~ElectromagneticEmissionsPdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const ElectromagneticEmissionsPdu& lhs, const ElectromagneticEmissionsPdu& rhs) {
    return lhs.emitting_entity_id_ == rhs.emitting_entity_id_ && lhs.event_id_ == rhs.event_id_ &&
           lhs.state_update_indicator_ == rhs.state_update_indicator_ &&
           lhs.number_of_systems_ == rhs.number_of_systems_ && lhs.padding_ == rhs.padding_ &&
           lhs.systems_ == rhs.systems_;
  }
};
}  // namespace dis
