# Create list of all source files
set(utils_src
  Conversion.cpp
  ByteBuffer.cpp
  IncomingMessage.cpp
  PacketFactory.cpp
  PduBank.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${utils_src})
