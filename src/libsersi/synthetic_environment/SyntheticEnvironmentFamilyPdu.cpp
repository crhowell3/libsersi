#include "libsersi/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"

namespace dis {
void SyntheticEnvironmentFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);  // Marshal information in superclass first
}

void SyntheticEnvironmentFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);  // unmarshal information in superclass first
}

bool SyntheticEnvironmentFamilyPdu::operator==(
    const SyntheticEnvironmentFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t SyntheticEnvironmentFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
