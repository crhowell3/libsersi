#pragma once

#include <cstddef>

#include "libsersi/common/EntityID.h"
#include "libsersi/logistics/LogisticsFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.5.4. Cancel of resupply by either the receiving or supplying
// entity. COMPLETE

class ResupplyCancelPdu final : public LogisticsFamilyPdu {
 private:
  /** Entity that is receiving service */
  EntityID receiving_entity_id_;

  /** Entity that is supplying */
  EntityID supplying_entity_id_;

 public:
  ResupplyCancelPdu();
  ~ResupplyCancelPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  EntityID& GetSupplyingEntityId();
  [[nodiscard]] const EntityID& GetSupplyingEntityId() const;
  void SetSupplyingEntityId(const EntityID& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const ResupplyCancelPdu& rhs) const;
};
}  // namespace dis
