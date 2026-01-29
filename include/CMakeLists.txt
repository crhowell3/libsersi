# Create list of all headers
set(protocol_hdrs
  Warfare.hpp
)

install(FILES ${protocol_hdrs}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi)
