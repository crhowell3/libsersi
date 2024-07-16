#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.5. Abstract superclass for logistics PDUs. COMPLETE

class LogisticsFamilyPdu : public Pdu {
 public:
  LogisticsFamilyPdu();
  ~LogisticsFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const LogisticsFamilyPdu& rhs) const;
};
}  // namespace dis
