#include "libsersi/distributed_emissions/DistributedEmissionsFamilyPdu.h"

namespace dis {

void DistributedEmissionsFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);
}

void DistributedEmissionsFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);
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
