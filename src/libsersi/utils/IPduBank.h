#pragma once

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
/// houses instances for the set of known PDU classes to be returned
/// when provided with the PDU type's identifier value.
class IPduBank {
 public:
  ~IPduBank() = default;

  /// finds the PDU instance corresponding to the identifier
  /// @param pdu_type the 8-bit PDU type identifier
  /// @return NULL when the pdu_type is unknown.
  virtual Pdu* GetStaticPDU(uint8_t pdu_type, DataStream& ds) = 0;
};
}  // namespace dis
