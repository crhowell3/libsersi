#pragma once

#include <vector>

#include "libdis6/distributed_emissions/BeamData.h"
#include "libdis6/distributed_emissions/FundamentalParameterDataIff.h"
#include "libdis6/distributed_emissions/IffAtcNavAidsLayer1Pdu.h"
#include "libdis6/distributed_emissions/LayerHeader.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.7.4.2 When present, layer 2 should follow layer 1 and have the
// following fields. This requires manual cleanup.        the beamData attribute
// semantics are used in multiple ways. UNFINSISHED

class IffAtcNavAidsLayer2Pdu final : public IffAtcNavAidsLayer1Pdu {
 private:
  /** layer header */
  LayerHeader layer_header_;

  /** beam data */
  BeamData beam_data_;

  /** Secondary operational data, 5.2.57 */
  BeamData secondary_operational_data_;

  /** variable length list of fundamental parameters. ^^^This is wrong */
  std::vector<FundamentalParameterDataIff> fundamental_iff_parameters_;

 public:
  IffAtcNavAidsLayer2Pdu() = default;
  ~IffAtcNavAidsLayer2Pdu() final;
  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  LayerHeader& GetLayerHeader();
  [[nodiscard]] const LayerHeader& GetLayerHeader() const;
  void SetLayerHeader(const LayerHeader& value);

  BeamData& GetBeamData();
  [[nodiscard]] const BeamData& GetBeamData() const;
  void SetBeamData(const BeamData& value);

  BeamData& GetSecondaryOperationalData();
  [[nodiscard]] const BeamData& GetSecondaryOperationalData() const;
  void SetSecondaryOperationalData(const BeamData& value);

  std::vector<FundamentalParameterDataIff>& GetFundamentalIffParameters();
  [[nodiscard]] const std::vector<FundamentalParameterDataIff>&
  GetFundamentalIffParameters() const;
  void SetFundamentalIffParameters(
      const std::vector<FundamentalParameterDataIff>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const IffAtcNavAidsLayer2Pdu& rhs) const;
};

}  // namespace dis
