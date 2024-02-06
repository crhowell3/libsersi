set(simulation_management_reliable_hdr
  AcknowledgeReliablePdu.h
  ActionRequestReliablePdu.h
  ActionResponseReliablePdu.h
  CommentReliablePdu.h
  CreateEntityReliablePdu.h
  DataQueryReliablePdu.h
  DataReliablePdu.h
  EventReportReliablePdu.h
  RecordQueryReliablePdu.h
  RemoveEntityReliablePdu.h
  SetDataReliablePdu.h
  SetRecordReliablePdu.h
  SimulationManagementWithReliabilityFamilyPdu.h
  StartResumeReliablePdu.h
  StopFreezeReliablePdu.h
)

set(simulation_management_reliable_src
  AcknowledgeReliablePdu.cpp
  ActionRequestReliablePdu.cpp
  ActionResponseReliablePdu.cpp
  CommentReliablePdu.cpp
  CreateEntityReliablePdu.cpp
  DataQueryReliablePdu.cpp
  DataReliablePdu.cpp
  EventReportReliablePdu.cpp
  RecordQueryReliablePdu.cpp
  RemoveEntityReliablePdu.cpp
  SetDataReliablePdu.cpp
  SetRecordReliablePdu.cpp
  SimulationManagementWithReliabilityFamilyPdu.cpp
  StartResumeReliablePdu.cpp
  StopFreezeReliablePdu.cpp
)

target_sources(OpenDIS6 PRIVATE ${simulation_management_reliable_src})

install(FILES ${simulation_management_reliable_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dis6/simulation_management_reliable
)
