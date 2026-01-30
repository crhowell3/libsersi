# Create list of all headers
file(GLOB_RECURSE protocol_hdrs
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  *.hpp
)

install(FILES ${protocol_hdrs}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libsersi)
