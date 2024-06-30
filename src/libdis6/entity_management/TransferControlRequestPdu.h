#pragma once

#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/RecordSet.h"
#include "libdis6/entity_management/EntityManagementFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.9.3 Information initiating the dyanic allocation and control of
// simulation entities         between two simulation applications. Requires
// manual cleanup. The padding between record sets is variable. UNFINISHED

class TransferControlRequestPdu final : public EntityManagementFamilyPdu {
 private:
  /** ID of entity originating request */
  EntityID originating_entity_id_;

  /** ID of entity receiving request */
  EntityID receiving_entity_id_;

  /** ID ofrequest */
  uint32_t request_id_;

  /** required level of reliabliity service. */
  uint8_t required_reliability_service_;

  /** type of transfer desired */
  uint8_t transfer_type_;

  /** The entity for which control is being requested to transfer */
  EntityID transfer_entity_id_;

  /** number of record sets to transfer */
  uint8_t number_of_record_sets_;

  /** ^^^This is wrong--the RecordSet class needs more work */
  std::vector<RecordSet> record_sets_;

 public:
  TransferControlRequestPdu();
  ~TransferControlRequestPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetOriginatingEntityId();
  [[nodiscard]] const EntityID& GetOriginatingEntityId() const;
  void SetOriginatingEntityId(const EntityID& value);

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] uint8_t GetRequiredReliabilityService() const;
  void SetRequiredReliabilityService(uint8_t value);

  [[nodiscard]] uint8_t GetTransferType() const;
  void SetTransferType(uint8_t value);

  EntityID& GetTransferEntityId();
  [[nodiscard]] const EntityID& GetTransferEntityId() const;
  void SetTransferEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetNumberOfRecordSets() const;

  std::vector<RecordSet>& GetRecordSets();
  [[nodiscard]] const std::vector<RecordSet>& GetRecordSets() const;
  void SetRecordSets(const std::vector<RecordSet>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const TransferControlRequestPdu& rhs) const;
};
}  // namespace dis
