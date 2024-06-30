set(common_src
  ArticulationParameter.cpp
  ClockTime.cpp
  EntityID.cpp
  EntityType.cpp
  EventID.cpp
  FixedDatum.cpp
  Orientation.cpp
  Pdu.cpp
  RecordSet.cpp
  SimulationAddress.cpp
  VariableDatum.cpp
  Vector3Double.cpp
  Vector3Float.cpp
)

set(common_hdr
  ArticulationParameter.h
  ClockTime.h
  EntityID.h
  EntityType.h
  EventID.h
  FixedDatum.h
  Orientation.h
  Pdu.h
  RecordSet.h
  SimulationAddress.h
  VariableDatum.h
  Vector3Double.h
  Vector3Float.h
)

target_sources(dis6 PRIVATE ${common_src})

install(FILES ${common_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/common
)
