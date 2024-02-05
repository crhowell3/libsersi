#pragma once

#include "dis6/common/Pdu.h"
#include "dis6/utils/PduType.h"

namespace dis {
/// houses instances for the set of known PDU classes to be returned
/// when provided with the PDU type's identifier value.
class PduBank {
 public:
  /// finds the PDU instance corresponding to the identifier
  /// @param pdu_type the 8-bit PDU type identifier
  /// @return NULL when the pdu_type is unknown.
  static Pdu* GetStaticPDU(dis::PduType pdu_type);
};
}  // namespace dis
