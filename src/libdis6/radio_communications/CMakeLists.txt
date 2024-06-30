set(radio_communications_src
  AntennaLocation.cpp
  IntercomCommunicationsParameters.cpp
  IntercomControlPdu.cpp
  IntercomSignalPdu.cpp
  ModulationType.cpp
  RadioCommunicationsFamilyPdu.cpp
  RadioEntityType.cpp
  ReceiverPdu.cpp
  SignalPdu.cpp
  TransmitterPdu.cpp
)

set(radio_communications_hdr
  AntennaLocation.h
  IntercomCommunicationsParameters.h
  IntercomControlPdu.h
  IntercomSignalPdu.h
  ModulationType.h
  RadioCommunicationsFamilyPdu.h
  RadioEntityType.h
  ReceiverPdu.h
  SignalPdu.h
  TransmitterPdu.h
)

target_sources(dis6 PRIVATE ${radio_communications_src})

install(FILES ${radio_communications_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/radio_communications
)
