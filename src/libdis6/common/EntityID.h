#pragma once

#include "libdis6/utils/DataStream.h"

namespace dis {
// Each entity in a given DIS simulation application shall be given an entity
// identifier number unique to all  other entities in that application. This
// identifier number is valid for the duration of the exercise; however,  entity
// identifier numbers may be reused when all possible numbers have been
// exhausted. No entity shall  have an entity identifier number of NO_ENTITY,
// ALL_ENTITIES, or RQST_ASSIGN_ID. The entity iden-  tifier number need not be
// registered or retained for future exercises. The entity identifier number
// shall be  specified by a 16-bit uint32_teger.  An entity identifier
// number equal to zero with valid site and application identification shall
// address a  simulation application. An entity identifier number equal to
// ALL_ENTITIES shall mean all entities within  the specified site and
// application. An entity identifier number equal to RQST_ASSIGN_ID allows the
// receiver of the create entity to define the entity identifier number of the
// new entity.

class EntityID {
 private:
  /** The site ID */
  uint16_t site_;  // NOLINT

  /** The application ID */
  uint16_t application_;  // NOLINT

  /** the entity ID */
  uint16_t entity_;  // NOLINT

 public:
  EntityID();
  virtual ~EntityID();

  virtual void Marshal(DataStream& data_stream) const;
  virtual void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetSite() const;
  void SetSite(uint16_t value);

  [[nodiscard]] uint16_t GetApplication() const;
  void SetApplication(uint16_t value);

  [[nodiscard]] uint16_t GetEntity() const;
  void SetEntity(uint16_t value);

  [[nodiscard]] virtual int GetMarshalledSize() const;

  bool operator==(const EntityID& rhs) const;
};
}  // namespace dis

