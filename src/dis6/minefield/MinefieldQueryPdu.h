#pragma once

#include <cstddef>
#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/common/EntityType.h"
#include "dis6/minefield/MinefieldFamilyPdu.h"
#include "dis6/minefield/Point.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.10.2 Query a minefield for information about individual mines.
// Requires manual clean up to get the padding right. UNFINISHED

class MinefieldQueryPdu final : public MinefieldFamilyPdu {
 private:
  /** Minefield ID */
  EntityID minefield_id_;

  /** EID of entity making the request */
  EntityID requesting_entity_id_;

  /** request ID */
  uint8_t request_id_;

  /** Number of perimeter points for the minefield */
  uint8_t number_of_perimeter_points_;

  /** Padding */
  uint8_t pad2_;

  /** Number of sensor types */
  uint8_t number_of_sensor_types_;

  /** data filter, 32 boolean fields */
  uint32_t data_filter_;

  /** Entity type of mine being requested */
  EntityType requested_mine_type_;

  /** perimeter points of request */
  std::vector<Point> requested_perimeter_points_;

  /** Sensor types, each 16 bits long */
  std::vector<uint16_t> sensor_types_;

 public:
  MinefieldQueryPdu();
  ~MinefieldQueryPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetMinefieldId();
  [[nodiscard]] const EntityID& GetMinefieldId() const;
  void SetMinefieldId(const EntityID& value);

  EntityID& GetRequestingEntityId();
  [[nodiscard]] const EntityID& GetRequestingEntityId() const;
  void SetRequestingEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetRequestId() const;
  void SetRequestId(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfPerimeterPoints() const;

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfSensorTypes() const;

  [[nodiscard]] uint32_t GetDataFilter() const;
  void SetDataFilter(uint32_t value);

  EntityType& GetRequestedMineType();
  [[nodiscard]] const EntityType& GetRequestedMineType() const;
  void SetRequestedMineType(const EntityType& value);

  std::vector<Point>& GetRequestedPerimeterPoints();
  [[nodiscard]] const std::vector<Point>& GetRequestedPerimeterPoints() const;
  void SetRequestedPerimeterPoints(const std::vector<Point>& value);

  std::vector<uint16_t>& GetSensorTypes();
  [[nodiscard]] const std::vector<uint16_t>& GetSensorTypes() const;
  void SetSensorTypes(const std::vector<uint16_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const MinefieldQueryPdu& rhs) const;
};
}  // namespace dis
