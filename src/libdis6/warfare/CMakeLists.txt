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

target_sources(dis6 PRIVATE ${warfare_src})

install(FILES ${warfare_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/warfare
)
