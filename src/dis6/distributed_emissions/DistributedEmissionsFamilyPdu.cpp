#include "dis6/distributed_emissions/DistributedEmissionsFamilyPdu.h"

namespace dis {
DistributedEmissionsFamilyPdu::DistributedEmissionsFamilyPdu() {
  SetProtocolFamily(6);
}

DistributedEmissionsFamilyPdu::~DistributedEmissionsFamilyPdu() = default;

void DistributedEmissionsFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);
}

void DistributedEmissionsFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);
}

bool DistributedEmissionsFamilyPdu::operator==(
    const DistributedEmissionsFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t DistributedEmissionsFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = 0;

  marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
