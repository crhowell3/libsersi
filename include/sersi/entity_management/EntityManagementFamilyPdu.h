#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.9. Common superclass for EntityManagment PDUs, including
// aggregate state, isGroupOf, TransferControLRequest, and isPartOf

class EntityManagementFamilyPdu : public Pdu {
 public:
  EntityManagementFamilyPdu();
  ~EntityManagementFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const EntityManagementFamilyPdu& rhs) const;
};
}  // namespace dis
