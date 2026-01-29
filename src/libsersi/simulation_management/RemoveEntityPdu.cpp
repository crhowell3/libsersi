#include "libsersi/simulation_management/RemoveEntityPdu.h"

namespace dis {
RemoveEntityPdu::RemoveEntityPdu() : request_id_(0) { SetPduType(12); }

uint32_t RemoveEntityPdu::GetRequestId() const { return request_id_; }

void RemoveEntityPdu::SetRequestId(uint32_t value) { request_id_ = value; }

void RemoveEntityPdu::Marshal(ByteBuffer& byte_buffer) const {
  SimulationManagementFamilyPdu::Marshal(byte_buffer);
  byte_buffer << request_id_;
}

void RemoveEntityPdu::Unmarshal(ByteBuffer& byte_buffer) {
  SimulationManagementFamilyPdu::Unmarshal(byte_buffer);
  byte_buffer >> request_id_;
}

bool RemoveEntityPdu::operator==(const RemoveEntityPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RemoveEntityPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
