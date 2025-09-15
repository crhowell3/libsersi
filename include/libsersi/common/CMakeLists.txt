set(common_hdr
  ArticulationParameter.hpp
  ClockTime.hpp
  EntityID.hpp
  EntityType.hpp
  EventID.hpp
  FixedDatum.hpp
  Orientation.hpp
  Pdu.hpp
  RecordSet.hpp
  SimulationAddress.hpp
  VariableDatum.hpp
  Vector3Double.hpp
  Vector3Float.hpp
)

install(FILES ${common_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi/common
)
