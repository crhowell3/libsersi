set(LIBDIS6_PACKAGE_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/libdis6")

include(CMakePackageConfigHelpers)

configure_package_config_file(
  libdis6-config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config.cmake
  INSTALL_DESTINATION ${LIBDIS6_PACKAGE_DIR}
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/libdis6-config-version.cmake"
  VERSION "${PROJECT_VERSION_FULL}"
  COMPATIBILITY SameMajorVersion)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/libdis6-config-version.cmake
        DESTINATION ${LIBDIS6_PACKAGE_DIR})
