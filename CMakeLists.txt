cmake_minimum_required(VERSION 3.22)

project(libdis6
  VERSION 0.1.0
  LANGUAGES CXX
)

include(${CMAKE_SOURCE_DIR}/cmake/libdis6-api.cmake)

libdis6_project_defaults()

# Define OpenDIS6 Library
add_library(dis6 "")

# Add src/ to the include directories to libdis6
target_include_directories(dis6
  PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:${INSTALL_INCLUDE_DIR}>
)
target_include_directories(dis6 SYSTEM
  PUBLIC $<BUILD_INTERFACE:${PROJECT_BINARY_DIR/src}>
    $<INSTALL_INTERFACE:${INSTALL_INCLUDE_DIR}>
  PRIVATE $<BUILD_INTERFACE:${CMRC_INCLUDE_DIR}>
)

# Add source directories
add_subdirectory(src)

# Configure install target (i.e. what files to install)
install(TARGETS dis6
        EXPORT libdis6-targets
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(EXPORT libdis6-targets
        NAMESPACE libdis6::
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/libdis6")

# Add cmake configuration
add_subdirectory(cmake)

# configure package target (i.e. Package Types, and meta data)
set(CPACK_GENERATOR "DEB" "RPM" "TXZ" "TGZ")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_NAME "libdis6")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "The libdis6 library")
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}.${CMAKE_SYSTEM_PROCESSOR}")
set(CPACK_PACKAGE_RPM_DIR "${CMAKE_CURRENT_BINARY_DIR}/_CPack_Packages/Linux/RPM")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Cameron Howell <crhowell3@gmail.com>")
set(CPACK_PACKAGE_PACKAGER $ENV{USER})
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "The libdis6 library")
include(CPack)
