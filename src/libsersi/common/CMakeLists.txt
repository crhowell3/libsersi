add_subdirectory(data_types)

set(common_src
  ArticulationParameter.cpp
  BurstDescriptor.cpp
  EntityID.cpp
  EntityType.cpp
  EventID.cpp
  FixedDatum.cpp
  Orientation.cpp
  RecordSet.cpp
  SimulationAddress.cpp
  VariableDatum.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${common_src})
