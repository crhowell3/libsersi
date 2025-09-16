#pragma once

#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.36. Each agregate in a given simulation app is given an aggregate
// identifier number unique for all other aggregates in that app and in that
// exercise. The id is valid for the duration of the the exercise.

class AggregateID {
 private:
  /** The site ID */
  uint16_t site_;

  /** The application ID */
  uint16_t application_;

  /** the aggregate ID */
  uint16_t aggregate_id_;

 public:
  AggregateID();
  ~AggregateID() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetSite() const;
  void SetSite(uint16_t value);

  [[nodiscard]] uint16_t GetApplication() const;
  void SetApplication(uint16_t value);

  [[nodiscard]] uint16_t GetAggregateId() const;
  void SetAggregateId(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AggregateID& rhs) const;
};
}  // namespace dis
