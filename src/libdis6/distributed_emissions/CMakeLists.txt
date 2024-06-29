set(distributed_emissions_hdr
  AcousticBeamData.h
  AcousticBeamFundamentalParameter.h
  AcousticEmitter.h
  AcousticEmitterSystem.h
  AcousticEmitterSystemData.h
  ApaData.h
  BeamData.h
  DesignatorPdu.h
  DistributedEmissionsFamilyPdu.h
  ElectromagneticEmissionBeamData.h
  ElectromagneticEmissionsPdu.h
  ElectromagneticEmissionSystemData.h
  EmitterSystem.h
  FundamentalParameterData.h
  FundamentalParameterDataIff.h
  IffAtcNavAidsLayer1Pdu.h
  IffAtcNavAidsLayer2Pdu.h
  IffFundamentalData.h
  LayerHeader.h
  PropulsionSystemData.h
  SeesPdu.h
  ShaftRPMs.h
  SystemID.h
  TrackJamTarget.h
  UnderwaterAcousticsPdu.h
  VectoringNozzleSystemData.h
)

set(distributed_emissions_src
  AcousticBeamData.cpp
  AcousticBeamFundamentalParameter.cpp
  AcousticEmitter.cpp
  AcousticEmitterSystem.cpp
  AcousticEmitterSystemData.cpp
  ApaData.cpp
  BeamData.cpp
  DesignatorPdu.cpp
  DistributedEmissionsFamilyPdu.cpp
  ElectromagneticEmissionBeamData.cpp
  ElectromagneticEmissionsPdu.cpp
  ElectromagneticEmissionSystemData.cpp
  EmitterSystem.cpp
  FundamentalParameterData.cpp
  FundamentalParameterDataIff.cpp
  IffAtcNavAidsLayer1Pdu.cpp
  IffAtcNavAidsLayer2Pdu.cpp
  IffFundamentalData.cpp
  LayerHeader.cpp
  PropulsionSystemData.cpp
  SeesPdu.cpp
  ShaftRPMs.cpp
  SystemID.cpp
  TrackJamTarget.cpp
  UnderwaterAcousticsPdu.cpp
  VectoringNozzleSystemData.cpp
)

target_sources(OpenDIS6 PRIVATE ${distributed_emissions_src})

install(FILES ${distributed_emissions_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dis6/distributed_emissions
)
