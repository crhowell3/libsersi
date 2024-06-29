set(entity_management_src
  AggregateID.cpp
  AggregateMarking.cpp
  AggregateStatePdu.cpp
  AggregateType.cpp
  EntityManagementFamilyPdu.cpp
  IsGroupOfPdu.cpp
  IsPartOfPdu.cpp
  NamedLocation.cpp
  Relationship.cpp
  TransferControlRequestPdu.cpp
)

set(entity_management_hdr
  AggregateID.h
  AggregateMarking.h
  AggregateStatePdu.h
  AggregateType.h
  EntityManagementFamilyPdu.h
  IsGroupOfPdu.h
  IsPartOfPdu.h
  NamedLocation.h
  Relationship.h
  TransferControlRequestPdu.h
)

target_sources(OpenDIS6 PRIVATE ${entity_management_src})

install(FILES ${entity_management_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dis6/entity_management
)
