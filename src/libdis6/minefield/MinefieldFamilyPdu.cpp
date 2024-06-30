#include "libdis6/minefield/MinefieldFamilyPdu.h"

#include <cstddef>

namespace dis {
MinefieldFamilyPdu::MinefieldFamilyPdu() { SetProtocolFamily(8); }

void MinefieldFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);
}

void MinefieldFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);
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
