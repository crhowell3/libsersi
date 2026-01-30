#include entity_management/EntityManagementFamilyPdu.h"

namespace dis {
void EntityManagementFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);  // Marshal information in superclass first
}

void EntityManagementFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);  // unmarshal information in superclass first
}

bool EntityManagementFamilyPdu::operator==(
    const EntityManagementFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t EntityManagementFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
