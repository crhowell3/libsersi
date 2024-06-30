#pragma once

#include <cstddef>
#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/EntityType.h"
#include "libdis6/common/Vector3Float.h"
#include "libdis6/minefield/MinefieldFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.10.3 Information about individual mines within a minefield. This
// is very, very wrong. UNFINISHED

class MinefieldDataPdu final : public MinefieldFamilyPdu {
 private:
  /** Minefield ID */
  EntityID minefield_id_;

  /** ID of entity making request */
  EntityID requesting_entity_id_;

  /** Minefield sequence number */
  uint16_t minefield_sequence_number_;

  /** request ID */
  uint8_t request_id_;

  /** pdu sequence number */
  uint8_t pdu_sequence_number_;

  /** number of pdus in response */
  uint8_t number_of_pdus_;

  /** how many mines are in this PDU */
  uint8_t number_of_mines_in_this_pdu_;

  /** how many sensor type are in this PDU */
  uint8_t number_of_sensor_types_;

  /** padding */
  uint8_t pad2_;

  /** 32 boolean fields */
  uint32_t data_filter_;

  /** Mine type */
  EntityType mine_type_;

  /** Sensor types, each 16 bits long */
  std::vector<uint16_t> sensor_types_;

  /** Padding to get things 32-bit aligned. ^^^this is wrong--dyanmically sized
   * padding needed */
  uint8_t pad3_;

  /** Mine locations */
  std::vector<Vector3Float> mine_location_;

 public:
  MinefieldDataPdu();
  ~MinefieldDataPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetMinefieldId();
  [[nodiscard]] const EntityID& GetMinefieldId() const;
  void SetMinefieldId(const EntityID& value);

  EntityID& GetRequestingEntityId();
  [[nodiscard]] const EntityID& GetRequestingEntityId() const;
  void SetRequestingEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetMinefieldSequenceNumber() const;
  void SetMinefieldSequenceNumber(uint16_t value);

  [[nodiscard]] uint8_t GetRequestId() const;
  void SetRequestId(uint8_t value);

  [[nodiscard]] uint8_t GetPduSequenceNumber() const;
  void SetPduSequenceNumber(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfPdus() const;
  void SetNumberOfPdus(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfMinesInThisPdu() const;

  [[nodiscard]] uint8_t GetNumberOfSensorTypes() const;

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  [[nodiscard]] uint32_t GetDataFilter() const;
  void SetDataFilter(uint32_t value);

  EntityType& GetMineType();
  [[nodiscard]] const EntityType& GetMineType() const;
  void SetMineType(const EntityType& value);

  std::vector<uint16_t>& GetSensorTypes();
  [[nodiscard]] const std::vector<uint16_t>& GetSensorTypes() const;
  void SetSensorTypes(const std::vector<uint16_t>& value);

  [[nodiscard]] uint8_t GetPad3() const;
  void SetPad3(uint8_t value);

  std::vector<Vector3Float>& GetMineLocation();
  [[nodiscard]] const std::vector<Vector3Float>& GetMineLocation() const;
  void SetMineLocation(const std::vector<Vector3Float>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const MinefieldDataPdu& rhs) const;
};

}  // namespace dis
