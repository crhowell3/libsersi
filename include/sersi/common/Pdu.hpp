#pragma once

#include <cstdint>

#include "sersi/utils/DataStream.hpp"

namespace dis {
// The superclass for all PDUs. This incorporates the PduHeader record,
// section 5.2.29.

class Pdu {
private:
  /** The version of the protocol. 5=DIS-1995, 6=DIS-1998. */
  uint8_t protocol_version_{};

  /** Exercise ID */
  uint8_t exercise_id_{};

  /** Type of pdu, unique for each PDU class */
  uint8_t pdu_type_{};

  /** value that refers to the protocol family, eg SimulationManagement, et */
  uint8_t protocol_family_{};

  /** Timestamp value */
  uint32_t timestamp_{};

  /** Length, in bytes, of the PDU */
  uint16_t length_{};

  /** zero-filled array of padding */
  int16_t padding_{};

public:
  Pdu() = default;
  virtual ~Pdu() = default;

  virtual void Marshal(DataStream &data_stream) const {
    data_stream << protocol_version_;
    data_stream << exercise_id_;
    data_stream << pdu_type_;
    data_stream << protocol_family_;
    data_stream << timestamp_;
    data_stream << length_;
    data_stream << padding_;
  }
  virtual void Unmarshal(DataStream &data_stream) {
    data_stream >> protocol_version_;
    data_stream >> exercise_id_;
    data_stream >> pdu_type_;
    data_stream >> protocol_family_;
    data_stream >> timestamp_;
    data_stream >> length_;
    data_stream >> padding_;
  }

  [[nodiscard]] auto GetProtocolVersion() const -> uint8_t {
    return protocol_version_;
  }
  void SetProtocolVersion(uint8_t value) { protocol_version_ = value; }

  [[nodiscard]] auto GetExerciseId() const -> uint8_t { return exercise_id_; }
  void SetExerciseId(uint8_t value) { exercise_id_ = value; }

  [[nodiscard]] auto GetPduType() const -> uint8_t { return pdu_type_; }
  void SetPduType(uint8_t value) { pdu_type_ = value; }

  [[nodiscard]] auto GetProtocolFamily() const -> uint8_t {
    return protocol_family_;
  }
  void SetProtocolFamily(uint8_t value) { protocol_family_ = value; }

  [[nodiscard]] auto GetTimestamp() const -> uint32_t { return timestamp_; }
  void SetTimestamp(uint32_t value) { timestamp_ = value; }

  [[nodiscard]] auto GetLength() const -> uint16_t { return length_; }
  void SetLength(uint16_t value) { length_ = value; }

  [[nodiscard]] auto GetPadding() const -> int16_t { return padding_; }

  void SetPadding(int16_t value) { padding_ = value; }

  [[nodiscard]] virtual auto GetMarshalledSize() const -> std::size_t {
    return sizeof(protocol_version_) + sizeof(exercise_id_) +
           sizeof(pdu_type_) + sizeof(protocol_family_) + sizeof(timestamp_) +
           sizeof(length_) + sizeof(padding_);
  }

  auto operator==(const Pdu &rhs) const -> bool {
    return protocol_version_ == rhs.protocol_version_ &&
           exercise_id_ == rhs.exercise_id_ && pdu_type_ == rhs.pdu_type_ &&
           protocol_family_ == rhs.protocol_family_ &&
           timestamp_ == rhs.timestamp_ && length_ == rhs.length_ &&
           padding_ == rhs.padding_;
  }
};
} // namespace dis
