#include entity_information/EntityInformationFamilyPdu.h"

namespace dis {

void EntityInformationFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);  // Marshal information in superclass first
}

void EntityInformationFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);  // unmarshal information in superclass first
}

bool EntityInformationFamilyPdu::operator==(
    const EntityInformationFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t EntityInformationFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
