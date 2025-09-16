#pragma once

#include "sersi/utils/DataStream.hpp"

namespace dis {

class EntityID {
 private:
  /** The site ID */
  uint16_t site_;  // NOLINT

  /** The application ID */
  uint16_t application_;  // NOLINT

  /** the entity ID */
  uint16_t entity_;  // NOLINT

 public:
  EntityID() = default;
  virtual ~EntityID() = default;

  virtual void Marshal(DataStream& data_stream) const {
    data_stream << site_;
    data_stream << application_;
    data_stream << entity_;
  }
  virtual void Unmarshal(DataStream& data_stream) {
    data_stream >> site_;
    data_stream >> application_;
    data_stream >> entity_;
  }

  [[nodiscard]] auto GetSite() const -> uint16_t {
    return site_;
  }
  void SetSite(uint16_t value) {
    site_ = value;
  }

  [[nodiscard]] auto GetApplication() const -> uint16_t {
    return application_;
  }
  void SetApplication(uint16_t value) {
    application_ = value;
  }

  [[nodiscard]] auto GetEntity() const -> uint16_t {
    return entity_;
  }
  void SetEntity(uint16_t value) {
    entity_ = value;
  }

  [[nodiscard]] virtual auto GetMarshalledSize() const -> int {
    return sizeof(site_) + sizeof(application_) + sizeof(entity_);
  }

  auto operator==(const EntityID& rhs) const -> bool {
    return site_ == rhs.site_ && application_ == rhs.application_ && entity_ == rhs.entity_;
  }
};
}  // namespace dis
