# Create list of all headers
set(utils_hdr
  Conversion.h
  ByteBuffer.hpp
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
  ByteBuffer.cpp
  IncomingMessage.cpp
  PacketFactory.cpp
  PduBank.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${utils_src})

install(FILES ${utils_hdr}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi/utils)
