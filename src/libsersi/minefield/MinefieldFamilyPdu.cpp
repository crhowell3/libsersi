#include minefield/MinefieldFamilyPdu.h"

#include <cstddef>

namespace dis {
void MinefieldFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);
}

void MinefieldFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);
}

bool MinefieldFamilyPdu::operator==(const MinefieldFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t MinefieldFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
