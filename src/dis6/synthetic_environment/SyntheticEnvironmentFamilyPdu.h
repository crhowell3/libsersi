#pragma once

#include <cstddef>

#include "dis6/common/Pdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.11: Abstract superclass for synthetic environment PDUs

class SyntheticEnvironmentFamilyPdu : public Pdu {
 public:
  SyntheticEnvironmentFamilyPdu();
  ~SyntheticEnvironmentFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const SyntheticEnvironmentFamilyPdu& rhs) const;
};
}  // namespace dis
