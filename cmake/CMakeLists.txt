set(LIBDIS6_PACKAGE_DIR
  "{CMAKE_INSTALL_DIR}/cmake/libdis6-${PROJECT_VERSION}"
)

include(CMakePackageConfigHelpers)
configure_package_config_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/libdis6-config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config.cmake
  INSTALL_DESTINATION ${LIBDIS6_PACKAGE_DIR}
  PATH_VARS CMAKE_INSTALL_INCLUDEDIR
            CMAKE_INSTALL_LIBDIR
            CMAKE_INSTALL_BINDIR
            CMAKE_INSTALL_DOCDIR
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/libdis6-config-version.cmake"
  VERSION "${PROJECT_VERSION}"
  COMPATIBILITY SameMajorVersion
)

export(EXPORT libdis6-targets
  FILES "${CMAKE_CURRENT_BINARY_DIR}/libdis6-targets.cmake"
  NAMESPACE libdis6::
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config-version.cmake
              ${CMAKE_CURRENT_SOURCE_DIR}/libdis6-api.cmake
        DESTINATION ${LIBDIS6_PACKAGE_DIR}
        COMPONENT devel      
)

install(EXPORT libdis6-targets
  FILE libdis6-targets.cmake
  NAMESPACE libdis6::
  DESTINATION ${LIBDIS6_PACKAGE_DIR}
  COMPONENT devel
)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/Modules/CodeCoverage.cmake
  DESTINATION ${LIBDIS6_PACKAGE_DIR}/Modules
  COMPONENT devel
)
