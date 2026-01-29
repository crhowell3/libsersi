#include "Warfare.hpp"

#include "libsersi/common/Result.hpp"

namespace dis {
Result<void, std::string> FirePdu::Marshal(ByteBuffer& byte_buffer) const {
  TRY(header_.Marshal(byte_buffer));
  TRY(firing_entity_id_.Marshal(byte_buffer));
  TRY(target_entity_id_.Marshal(byte_buffer));
  TRY(munition_id_.Marshal(byte_buffer));
  TRY(event_id_.Marshal(byte_buffer));
  byte_buffer << fire_mission_index_;
  TRY(location_in_world_coordinates_.Marshal(byte_buffer));
  TRY(burst_descriptor_.Marshal(byte_buffer));
  TRY(velocity_.Marshal(byte_buffer));
  byte_buffer << range_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> FirePdu::Unmarshal(ByteBuffer& byte_buffer) {
  TRY(header_.Unmarshal(byte_buffer));
  TRY(firing_entity_id_.Unmarshal(byte_buffer));
  TRY(target_entity_id_.Unmarshal(byte_buffer));
  TRY(munition_id_.Unmarshal(byte_buffer));
  TRY(event_id_.Unmarshal(byte_buffer));
  byte_buffer >> fire_mission_index_;
  TRY(location_in_world_coordinates_.Unmarshal(byte_buffer));
  TRY(burst_descriptor_.Unmarshal(byte_buffer));
  TRY(velocity_.Unmarshal(byte_buffer));
  byte_buffer >> range_;

  return Result<void, std::string>::Ok();
}

std::size_t FirePdu::GetMarshalledSize() const {
  std::size_t size = 0;
  return size;
}

Result<void, std::string> DetonationPdu::Marshal(
    ByteBuffer& byte_buffer) const {
  if (number_of_articulation_parameters_ != articulation_parameters_.size()) {
    return Result<void, std::string>::Err(
        "number_of_articulation_parameters_ != "
        "articulation_parameters_.size()");
  }

  TRY(header_.Marshal(byte_buffer));
  TRY(firing_entity_id_.Marshal(byte_buffer));
  TRY(target_entity_id_.Marshal(byte_buffer));
  TRY(munition_id_.Marshal(byte_buffer));
  TRY(event_id_.Marshal(byte_buffer));
  TRY(velocity_.Marshal(byte_buffer));
  TRY(location_in_entity_coordinates_.Marshal(byte_buffer));
  TRY(burst_descriptor_.Marshal(byte_buffer));
  TRY(location_in_entity_coordinates_.Marshal(byte_buffer));
  byte_buffer << detonation_result_;
  byte_buffer << number_of_articulation_parameters_;
  byte_buffer << padding_;

  for (std::size_t i = 0; i < number_of_articulation_parameters_; ++i) {
    TRY(articulation_parameters_[i].Marshal(byte_buffer));
  }

  return Result<void, std::string>::Ok();
}

Result<void, std::string> DetonationPdu::Unmarshal(
    ByteBuffer& byte_buffer) {
  TRY(header_.Unmarshal(byte_buffer));
  TRY(firing_entity_id_.Unmarshal(byte_buffer));
  TRY(target_entity_id_.Unmarshal(byte_buffer));
  TRY(munition_id_.Unmarshal(byte_buffer));
  TRY(event_id_.Unmarshal(byte_buffer));
  TRY(velocity_.Unmarshal(byte_buffer));
  TRY(location_in_entity_coordinates_.Unmarshal(byte_buffer));
  TRY(burst_descriptor_.Unmarshal(byte_buffer));
  TRY(location_in_entity_coordinates_.Unmarshal(byte_buffer));
  byte_buffer >> detonation_result_;
  byte_buffer >> number_of_articulation_parameters_;
  byte_buffer >> padding_;

  articulation_parameters_.clear();

  for (std::size_t idx = 0; idx < number_of_articulation_parameters_; idx++) {
    ArticulationParameter x;
    TRY(x.Unmarshal(byte_buffer));
    articulation_parameters_.push_back(x);
  }

  return Result<void, std::string>::Ok();
}

std::size_t DetonationPdu::GetMarshalledSize() const {
  std::size_t size = 0;
  return size;
}

}  // namespace dis
