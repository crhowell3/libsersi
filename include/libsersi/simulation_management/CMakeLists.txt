set(simulation_management_hdr
  AcknowledgePdu.h
  ActionRequestPdu.h
  ActionResponsePdu.h
  CommentPdu.h
  CreateEntityPdu.h
  DataPdu.h
  DataQueryPdu.h
  EventReportPdu.h
  RemoveEntityPdu.h
  SetDataPdu.h
  SimulationManagementFamilyPdu.h
  StartResumePdu.h
  StopFreezePdu.h
)

set(simulation_management_src
  AcknowledgePdu.cpp
  ActionRequestPdu.cpp
  ActionResponsePdu.cpp
  CommentPdu.cpp
  CreateEntityPdu.cpp
  DataPdu.cpp
  DataQueryPdu.cpp
  EventReportPdu.cpp
  RemoveEntityPdu.cpp
  SetDataPdu.cpp
  SimulationManagementFamilyPdu.cpp
  StartResumePdu.cpp
  StopFreezePdu.cpp
)

target_sources(sersi PRIVATE ${simulation_management_src})

install(FILES ${simulation_management_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi/simulation_management
)
