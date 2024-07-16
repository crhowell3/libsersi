#include "libsersi/logistics/LogisticsFamilyPdu.h"

namespace dis {
LogisticsFamilyPdu::LogisticsFamilyPdu() { SetProtocolFamily(3); }

void LogisticsFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);
}

void LogisticsFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);
}

bool LogisticsFamilyPdu::operator==(const LogisticsFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  return ivars_equal;
}

std::size_t LogisticsFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
