# Create list of all headers
set(utils_hdr
  Conversion.h
  DataStream.h
  Endian.h
  IBufferProcessor.h
  IncomingMessage.h
  IPacketProcessor.h
  IPduBank.h
  Masks.h
  PacketFactory.h
  PduBank.h
  PduType.h
)

# Create list of all source files
set(utils_src
  Conversion.cpp
  DataStream.cpp
  IncomingMessage.cpp
  PacketFactory.cpp
  PduBank.cpp
)

target_sources(libdis6 PRIVATE ${utils_src})

install(FILES ${utils_hdr}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/utils)
