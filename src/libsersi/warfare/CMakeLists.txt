set(warfare_hdr
  BurstDescriptor.h
  DetonationPdu.h
  FirePdu.h
  WarfareFamilyPdu.h
)

set(warfare_src
  BurstDescriptor.cpp
  DetonationPdu.cpp
  FirePdu.cpp
  WarfareFamilyPdu.cpp
)

target_sources(sersi PRIVATE ${warfare_src})

install(FILES ${warfare_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi/warfare
)
