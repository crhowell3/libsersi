#pragma once

#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.6.1. Create a new entity. COMPLETE

class CreateEntityPdu final : public SimulationManagementFamilyPdu {
 private:
  /** Identifier for the request */
  uint32_t request_id_;

 public:
  CreateEntityPdu();
  ~CreateEntityPdu() final = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const CreateEntityPdu& rhs) const;
};
}  // namespace dis
