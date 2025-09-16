#pragma once

#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.6.2. Remove an entity. COMPLETE

class RemoveEntityPdu final : public SimulationManagementFamilyPdu {
 private:
  /** Identifier for the request */
  uint32_t request_id_;

 public:
  RemoveEntityPdu();
  ~RemoveEntityPdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const RemoveEntityPdu& rhs) const;
};
}  // namespace dis
