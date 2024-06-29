#pragma once

#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/common/EntityType.h"
#include "dis6/synthetic_environment/Environment.h"
#include "dis6/synthetic_environment/SyntheticEnvironmentFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.11.1: Information about environmental effects and processes. This
// requires manual cleanup. the environmental        record is variable, as is
// the padding. UNFINISHED

class EnvironmentalProcessPdu final : public SyntheticEnvironmentFamilyPdu {
 private:
  /** Environmental process ID */
  dis::EntityID environmental_process_id_;

  /** Environment type */
  dis::EntityType environment_type_;

  /** model type */
  uint8_t model_type_;

  /** Environment status */
  uint8_t environment_status_;

  /** number of environment records  */
  uint8_t number_of_environment_records_;

  /** PDU sequence number for the environmentla process if pdu sequencing
   * required */
  uint16_t sequence_number_;

  /** environment records */
  std::vector<Environment> environment_records_;

 public:
  EnvironmentalProcessPdu();
  ~EnvironmentalProcessPdu() final;

  void Marshal(dis::DataStream& data_stream) const final;
  void Unmarshal(dis::DataStream& data_stream) final;

  dis::EntityID& GetEnvironmentalProcessId();
  [[nodiscard]] const dis::EntityID& GetEnvironmentalProcessId() const;
  void SetEnvironmentalProcessId(const dis::EntityID& value);

  dis::EntityType& GetEnvironmentType();
  [[nodiscard]] const dis::EntityType& GetEnvironmentType() const;
  void SetEnvironmentType(const dis::EntityType& value);

  [[nodiscard]] uint8_t GetModelType() const;
  void SetModelType(uint8_t value);

  [[nodiscard]] uint8_t GetEnvironmentStatus() const;
  void SetEnvironmentStatus(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfEnvironmentRecords() const;

  [[nodiscard]] uint16_t GetSequenceNumber() const;
  void SetSequenceNumber(uint16_t value);

  std::vector<Environment>& GetEnvironmentRecords();
  [[nodiscard]] const std::vector<Environment>& GetEnvironmentRecords() const;
  void SetEnvironmentRecords(const std::vector<Environment>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const EnvironmentalProcessPdu& rhs) const;
};
}  // namespace dis
