#pragma once

#include <cstdint>

#include "libsersi/common/enums.hpp"
#include "libsersi/utils/ByteBuffer.hpp"
#include "libsersi/common/Result.hpp"

namespace dis {

class PduStatusRecord {
 public:
  // TransferredEntityIdenticator tei_;
  // LVCIndicator lvc_;
  // CoupledExtensionIndicator cei_;
  // B2 bit4_5_;
  // B2 _reserved;
};

class PduHeader {
 public:
  PduHeader() = default;
  ~PduHeader() = default;

  uint32_t CalculateDISTimestamp();

  [[nodiscard]] ProtocolVersion protocol_version() const;
  void protocol_version(ProtocolVersion value);

  [[nodiscard]] uint8_t exercise_id() const;
  void exercise_id(uint8_t value);

  [[nodiscard]] PduType pdu_type() const;
  void pdu_type(PduType value);

  [[nodiscard]] ProtocolFamily protocol_family() const;
  void protocol_family(ProtocolFamily value);

  [[nodiscard]] uint32_t timestamp() const;
  void timestamp(uint32_t value);

  [[nodiscard]] uint16_t length() const;
  void length(uint16_t value);

  [[nodiscard]] PduStatusRecord status_record() const;
  void status_record(PduStatusRecord value);

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

 private:
  /// The version of the protocol
  ProtocolVersion protocol_version_;

  /// Exercise ID
  uint8_t exercise_id_;

  /// Type of PDU, unique for each PDU class
  PduType pdu_type_;

  /// Value that refers to the protocol family
  ProtocolFamily protocol_family_;

  /// Timestamp value
  uint32_t timestamp_;

  /// Length, in bytes, of the PDU
  uint16_t length_;

  /// PDU status record
  PduStatusRecord status_record_;
};

}  // namespace dis
