cmake_minimum_required(VERSION 3.22)

if(NOT PROJECT_NAME)
    set(PROJECT_NAME sersi)
endif()

if(NOT PROJECT_VERSION)
    set(PROJECT_VERSION 0.2.0)
endif()

project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  DESCRIPTION "IEEE 1278.1-2012 Distributed Interactive Simulation library"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add CXX build flags for robust warning and error checking during compilation
if (NOT MSVC)
  add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# Add source directories
add_subdirectory(include)
add_subdirectory(src)

include(CPack)
