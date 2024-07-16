#pragma once

#include <cstdint>

#include "libsersi/utils/DataStream.h"

namespace dis {
// The superclass for all PDUs. This incorporates the PduHeader record,
// section 5.2.29.

class Pdu {
 private:
  /** The version of the protocol. 5=DIS-1995, 6=DIS-1998. */
  uint8_t protocol_version_;

  /** Exercise ID */
  uint8_t exercise_id_;

  /** Type of pdu, unique for each PDU class */
  uint8_t pdu_type_;

  /** value that refers to the protocol family, eg SimulationManagement, et */
  uint8_t protocol_family_;

  /** Timestamp value */
  uint32_t timestamp_;

  /** Length, in bytes, of the PDU */
  uint16_t length_;

  /** zero-filled array of padding */
  int16_t padding_;

 public:
  Pdu();
  virtual ~Pdu();

  virtual void Marshal(DataStream& data_stream) const;
  virtual void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetProtocolVersion() const;
  void SetProtocolVersion(uint8_t value);

  [[nodiscard]] uint8_t GetExerciseId() const;
  void SetExerciseId(uint8_t value);

  [[nodiscard]] uint8_t GetPduType() const;
  void SetPduType(uint8_t value);

  [[nodiscard]] uint8_t GetProtocolFamily() const;
  void SetProtocolFamily(uint8_t value);

  [[nodiscard]] uint32_t GetTimestamp() const;
  void SetTimestamp(uint32_t value);

  [[nodiscard]] uint16_t GetLength() const;
  void SetLength(uint16_t value);

  [[nodiscard]] int16_t GetPadding() const;
  void SetPadding(int16_t value);

  [[nodiscard]] virtual std::size_t GetMarshalledSize() const;

  bool operator==(const Pdu& rhs) const;
};
}  // namespace dis
