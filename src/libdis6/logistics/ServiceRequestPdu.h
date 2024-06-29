#pragma once

#include <cstddef>
#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/logistics/LogisticsFamilyPdu.h"
#include "dis6/logistics/SupplyQuantity.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.5.1. Information about a request for supplies. COMPLETE

class ServiceRequestPdu final : public LogisticsFamilyPdu {
 private:
  /** Entity that is requesting service */
  EntityID requesting_entity_id_;

  /** Entity that is providing the service */
  EntityID servicing_entity_id_;

  /** type of service requested */
  uint8_t service_type_requested_;

  /** How many requested */
  uint8_t number_of_supply_types_;

  /** padding */
  int16_t service_request_padding_;

  std::vector<SupplyQuantity> supplies_;

 public:
  ServiceRequestPdu();
  ~ServiceRequestPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetRequestingEntityId();
  [[nodiscard]] const EntityID& GetRequestingEntityId() const;
  void SetRequestingEntityId(const EntityID& value);

  EntityID& GetServicingEntityId();
  [[nodiscard]] const EntityID& GetServicingEntityId() const;
  void SetServicingEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetServiceTypeRequested() const;
  void SetServiceTypeRequested(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfSupplyTypes() const;

  [[nodiscard]] int16_t GetServiceRequestPadding() const;
  void SetServiceRequestPadding(int16_t value);

  std::vector<SupplyQuantity>& GetSupplies();
  [[nodiscard]] const std::vector<SupplyQuantity>& GetSupplies() const;
  void SetSupplies(const std::vector<SupplyQuantity>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const ServiceRequestPdu& rhs) const;
};
}  // namespace dis
