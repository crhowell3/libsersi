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
  PDUBank.h
  PDUType.h
)

# Create list of all source files
set(utils_src
  Conversion.cpp
  DataStream.cpp
  IncomingMessage.cpp
  PacketFactory.cpp
  PDUBank.cpp
)

install(FILES ${utils_hdr}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dis6/utils)
