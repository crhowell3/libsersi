#pragma once

#include <cstdint>
#include <map>  // for member

#include "libsersi/common/Pdu.h"
#include "libsersi/utils/PacketFactory.hpp"

namespace dis {
class Pdu;

/// a utility to make functions
template <class BaseT, class DerivedT>
auto CreateImplementation() -> BaseT*{
  return new DerivedT();
}

/// responsible for mapping an ID value to a Pdu type.
class PacketFactory {
 public:
  /// Create a Pdu.
  /// @param id the value representing the "type" of the Pdu.  The value will be
  /// stored in the 3rd position of the buffer, as defined by the DIS
  /// specification.
  /// @return a dynamically allocated instance of a concrete Pdu.  The value
  /// will be 'NULL' if no support for creating the concrete Pdu was registered.
  static auto CreatePacket(uint8_t id) -> Pdu*{
    auto iter = f_map_.find(id);
    if (iter != f_map_.end()) {
      return (iter->second)();
    }

    return nullptr;
  }

  /// Clean up the memory for the Pdu.
  /// @param pdu The packet to be deleted.
  static void DestroyPacket(Pdu* pdu) {
    delete pdu;
  }

  /// Add support for creating the Pdu.
  /// @param id The value identifying the type of the Pdu.
  /// @return 'false' if a packet id was already registered for the Pdu type.
  /// 'true' if support was added.
  template <class T>
  auto RegisterPacket(uint8_t id) -> bool{
    FunctionMap::value_type candidate(id, &CreateImplementation<Pdu, T>);
    std::pair<FunctionMap::iterator, bool> result = f_map_.insert(candidate);
    return result.second;
  }

  /// Remove support for creating the Pdu.
  /// @param id The value identifying the type of the Pdu.
  /// @return 'false' if no support previously existed.  'true' if support was
  /// removed.
  auto UnRegisterPacket(char id) -> bool { return (f_map_.erase(id) > 0); }

  /// Check to know if the Pdu type is supported.
  /// @param id The value representing the Pdu type.
  /// @return 'true' if support for creating a Pdu was found, 'false' if not
  /// found.
  [[nodiscard]] static auto IsRegistered(uint8_t id) const -> bool{
    auto iter = f_map_.find(id);
    return (iter != f_map_.end());
  }

 private:
  /// the function signature required for creating Pdu instances.
  using CREATE_FUNC = Pdu* (*)();

  /// the type to contain mappings to functions used to create Pdu instances.
  using FunctionMap = std::map<uint8_t, CREATE_FUNC>;

  /// instance of the storage mechanism for creating Pdu instances.
  FunctionMap f_map_;
};
}  // namespace dis
