set(synthetic_environment_hdr
  ArealObjectStatePdu.h
  Environment.h
  EnvironmentalProcessPdu.h
  GridAxisRecord.h
  GridAxisRecordRepresentation0.h
  GridAxisRecordRepresentation1.h
  GridAxisRecordRepresentation2.h
  GriddedDataPdu.h
  LinearObjectStatePdu.h
  LinearSegmentParameter.h
  ObjectType.h
  PointObjectStatePdu.h
  SyntheticEnvironmentFamilyPdu.h
)

set(synthetic_environment_src
  ArealObjectStatePdu.cpp
  Environment.cpp
  EnvironmentalProcessPdu.cpp
  GridAxisRecord.cpp
  GridAxisRecordRepresentation0.cpp
  GridAxisRecordRepresentation1.cpp
  GridAxisRecordRepresentation2.cpp
  GriddedDataPdu.cpp
  LinearObjectStatePdu.cpp
  LinearSegmentParameter.cpp
  ObjectType.cpp
  PointObjectStatePdu.cpp
  SyntheticEnvironmentFamilyPdu.cpp
)
target_sources(libdis6 PRIVATE ${synthetic_environment_src})

install(FILES ${synthetic_environment_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/synthetic_environment
)
