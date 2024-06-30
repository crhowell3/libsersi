#include "libdis6/utils/PacketFactory.h"

#include <cstdlib>

#include "libdis6/common/Pdu.h"

namespace dis {
Pdu* PacketFactory::CreatePacket(uint8_t id) {
  auto iter = f_map_.find(id);
  if (iter != f_map_.end()) {
    return (iter->second)();
  }

  return nullptr;
}

void PacketFactory::DestroyPacket(Pdu* pdu) { delete pdu; }  // NOLINT

bool PacketFactory::IsRegistered(uint8_t id) const {
  auto iter = f_map_.find(id);
  return (iter != f_map_.end());
}

}  // namespace dis
