#pragma once

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.7. Electromagnetic Emissions. Abstract superclass for distirubted
// emissions PDU

class DistributedEmissionsFamilyPdu : public Pdu {
 private:
 public:
  DistributedEmissionsFamilyPdu();
  ~DistributedEmissionsFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const DistributedEmissionsFamilyPdu& rhs) const;
};
}  // namespace dis
