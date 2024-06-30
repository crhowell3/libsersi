#include "libdis6/entity_management/EntityManagementFamilyPdu.h"

namespace dis {
EntityManagementFamilyPdu::EntityManagementFamilyPdu() { SetProtocolFamily(7); }

void EntityManagementFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);  // Marshal information in superclass first
}

void EntityManagementFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);  // unmarshal information in superclass first
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
