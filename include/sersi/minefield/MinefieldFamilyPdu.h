#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.10.1 Abstract superclass for PDUs relating to minefields

class MinefieldFamilyPdu : public Pdu {
 public:
  MinefieldFamilyPdu();
  ~MinefieldFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const MinefieldFamilyPdu& rhs) const;
};
}  // namespace dis
