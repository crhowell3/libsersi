#pragma once

#include <cstddef>
#include <vector>

#include "libsersi/common/EntityID.h"
#include "libsersi/logistics/LogisticsFamilyPdu.h"
#include "libsersi/logistics/SupplyQuantity.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.5.3. Receipt of supplies is communiated. COMPLETE

class ResupplyReceivedPdu final : public LogisticsFamilyPdu {
 private:
  /** Entity that is receiving service */
  EntityID receiving_entity_id_;

  /** Entity that is supplying */
  EntityID supplying_entity_id_;

  /** how many supplies are being offered */
  uint8_t number_of_supply_types_;

  /** padding */
  int16_t padding1_;

  /** padding */
  char padding2_;

  std::vector<SupplyQuantity> supplies_;

 public:
  ResupplyReceivedPdu();
  ~ResupplyReceivedPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  EntityID& GetSupplyingEntityId();
  [[nodiscard]] const EntityID& GetSupplyingEntityId() const;
  void SetSupplyingEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetNumberOfSupplyTypes() const;

  [[nodiscard]] int16_t GetPadding1() const;
  void SetPadding1(int16_t value);

  [[nodiscard]] char GetPadding2() const;
  void SetPadding2(char value);

  std::vector<SupplyQuantity>& GetSupplies();
  [[nodiscard]] const std::vector<SupplyQuantity>& GetSupplies() const;
  void SetSupplies(const std::vector<SupplyQuantity>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const ResupplyReceivedPdu& rhs) const;
};
}  // namespace dis
