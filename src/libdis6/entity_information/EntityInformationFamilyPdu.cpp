#include "libdis6/entity_information/EntityInformationFamilyPdu.h"

namespace dis {
EntityInformationFamilyPdu::EntityInformationFamilyPdu() {
  SetProtocolFamily(1);
}

void EntityInformationFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);  // Marshal information in superclass first
}

void EntityInformationFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);  // unmarshal information in superclass first
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
