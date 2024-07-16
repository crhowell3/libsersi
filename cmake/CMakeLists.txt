set(LIBSERSI_PACKAGE_DIR
  "${CMAKE_INSTALL_LIBDIR}/cmake/libsersi"
)

include(CMakePackageConfigHelpers)
configure_package_config_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/libsersi-config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/libsersi-config.cmake
  INSTALL_DESTINATION ${LIBSERSI_PACKAGE_DIR}
  PATH_VARS CMAKE_INSTALL_INCLUDEDIR
            CMAKE_INSTALL_LIBDIR
            CMAKE_INSTALL_BINDIR
            CMAKE_INSTALL_DOCDIR
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/libsersi-config-version.cmake"
  VERSION "${PROJECT_VERSION}"
  COMPATIBILITY SameMajorVersion
)

export(EXPORT libsersi-targets
  FILE "${CMAKE_CURRENT_BINARY_DIR}/libsersi-targets.cmake"
  NAMESPACE libsersi::
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libsersi-config.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/libsersi-config-version.cmake
              ${CMAKE_CURRENT_SOURCE_DIR}/libsersi-api.cmake
        DESTINATION ${LIBSERSI_PACKAGE_DIR}
        COMPONENT devel      
)

install(EXPORT libsersi-targets
  FILE libsersi-targets.cmake
  NAMESPACE libsersi::
  DESTINATION ${LIBSERSI_PACKAGE_DIR}
  COMPONENT devel
)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/Modules/CodeCoverage.cmake
  DESTINATION ${LIBSERSI_PACKAGE_DIR}/Modules
  COMPONENT devel
)
