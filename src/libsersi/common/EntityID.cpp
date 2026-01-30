#include common/EntityID.h"

namespace dis {
EntityID::EntityID() : site_(0), application_(0), entity_(0) {}

EntityID::~EntityID() = default;

uint16_t EntityID::GetSite() const { return site_; }

void EntityID::SetSite(uint16_t value) { site_ = value; }

uint16_t EntityID::GetApplication() const { return application_; }

void EntityID::SetApplication(uint16_t value) { application_ = value; }

uint16_t EntityID::GetEntity() const { return entity_; }

void EntityID::SetEntity(uint16_t value) { entity_ = value; }

Result<void, std::string> EntityID::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << site_;
  byte_buffer << application_;
  byte_buffer << entity_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> EntityID::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> site_;
  byte_buffer >> application_;
  byte_buffer >> entity_;

  return Result<void, std::string>::Ok();
}

bool EntityID::operator==(const EntityID& rhs) const {
  bool ivars_equal = true;

  if (!(site_ == rhs.site_)) {
    ivars_equal = false;
  }
  if (!(application_ == rhs.application_)) {
    ivars_equal = false;
  }
  if (!(entity_ == rhs.entity_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

int EntityID::GetMarshalledSize() const {
  int marshal_size = 0;

  marshal_size = marshal_size + 2;  // site_
  marshal_size = marshal_size + 2;  // application_
  marshal_size = marshal_size + 2;  // entity_
  return marshal_size;
}

}  // namespace dis
