#pragma once

#include <cstddef>
#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/EntityType.h"
#include "libdis6/common/Orientation.h"
#include "libdis6/common/Vector3Double.h"
#include "libdis6/minefield/MinefieldFamilyPdu.h"
#include "libdis6/minefield/Point.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.10.1 Abstract superclass for PDUs relating to minefields.
// COMPLETE

class MinefieldStatePdu final : public MinefieldFamilyPdu {
 private:
  /** Minefield ID */
  EntityID minefield_id_;

  /** Minefield sequence */
  uint16_t minefield_sequence_;

  /** force ID */
  uint8_t force_id_;

  /** Number of permieter points */
  uint8_t number_of_perimeter_points_;

  /** type of minefield */
  EntityType minefield_type_;

  /** how many mine types */
  uint16_t number_of_mine_types_;

  /** location of minefield in world coords */
  Vector3Double minefield_location_;

  /** orientation of minefield */
  Orientation minefield_orientation_;

  /** appearance bitflags */
  uint16_t appearance_;

  /** protocolMode */
  uint16_t protocol_mode_;

  /** perimeter points for the minefield */
  std::vector<Point> perimeter_points_;

  /** Type of mines */
  std::vector<EntityType> mine_type_;

 public:
  MinefieldStatePdu();
  ~MinefieldStatePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetMinefieldId();
  [[nodiscard]] const EntityID& GetMinefieldId() const;
  void SetMinefieldId(const EntityID& value);

  [[nodiscard]] uint16_t GetMinefieldSequence() const;
  void SetMinefieldSequence(uint16_t value);

  [[nodiscard]] uint8_t GetForceId() const;
  void SetForceId(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfPerimeterPoints() const;

  EntityType& GetMinefieldType();
  [[nodiscard]] const EntityType& GetMinefieldType() const;
  void SetMinefieldType(const EntityType& value);

  [[nodiscard]] uint16_t GetNumberOfMineTypes() const;

  Vector3Double& GetMinefieldLocation();
  [[nodiscard]] const Vector3Double& GetMinefieldLocation() const;
  void SetMinefieldLocation(const Vector3Double& value);

  Orientation& GetMinefieldOrientation();
  [[nodiscard]] const Orientation& GetMinefieldOrientation() const;
  void SetMinefieldOrientation(const Orientation& value);

  [[nodiscard]] uint16_t GetAppearance() const;
  void SetAppearance(uint16_t value);

  [[nodiscard]] uint16_t GetProtocolMode() const;
  void SetProtocolMode(uint16_t value);

  std::vector<Point>& GetPerimeterPoints();
  [[nodiscard]] const std::vector<Point>& GetPerimeterPoints() const;
  void SetPerimeterPoints(const std::vector<Point>& value);

  std::vector<EntityType>& GetMineType();
  [[nodiscard]] const std::vector<EntityType>& GetMineType() const;
  void SetMineType(const std::vector<EntityType>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const MinefieldStatePdu& rhs) const;
};
}  // namespace dis
