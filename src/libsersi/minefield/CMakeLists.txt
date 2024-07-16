set(minefield_src
  MinefieldDataPdu.cpp
  MinefieldFamilyPdu.cpp
  MinefieldQueryPdu.cpp
  MinefieldResponseNackPdu.cpp
  MinefieldStatePdu.cpp
  Point.cpp
)

set(minefield_hdr
  MinefieldDataPdu.h
  MinefieldFamilyPdu.h
  MinefieldQueryPdu.h
  MinefieldResponseNackPdu.h
  MinefieldStatePdu.h
  Point.h
)

target_sources(sersi PRIVATE ${minefield_src})

install(FILES ${minefield_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi/minefield
)
