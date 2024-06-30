set(entity_information_hdr
  CollisionElasticPdu.h
  CollisionPdu.h
  DeadReckoningParameter.h
  EntityInformationFamilyPdu.h
  EntityStatePdu.h
  EntityStateUpdatePdu.h
  Marking.h
)

set(entity_information_src
  CollisionElasticPdu.cpp
  CollisionPdu.cpp
  DeadReckoningParameter.cpp
  EntityInformationFamilyPdu.cpp
  EntityStatePdu.cpp
  EntityStateUpdatePdu.cpp
  Marking.cpp
)

target_sources(dis6 PRIVATE ${entity_information_src})

install(FILES ${entity_information_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/entity_information
)
