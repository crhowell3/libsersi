#include "libsersi/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"

namespace dis {
SyntheticEnvironmentFamilyPdu::SyntheticEnvironmentFamilyPdu() {
  SetProtocolFamily(9);
}

void SyntheticEnvironmentFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);  // Marshal information in superclass first
}

void SyntheticEnvironmentFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);  // unmarshal information in superclass first
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
