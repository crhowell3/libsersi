macro(libsersi_project_defaults)
  string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)
  set(${PROJECT_NAME_UPPER}_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
  set(${PROJECT_NAME_UPPER}_VERSION_MINOR ${PROJECT_VERSION_MINOR})
  set(${PROJECT_NAME_UPPER}_VERSION_PATCH ${PROJECT_VERSION_PATCH})
  set(${PROJECT_NAME_UPPER}_VERSION ${PROJECT_VERSION})
  set(CI_BUILD_ID 0 CACHE STRING "CI build number")

  message(STATUS "${PROJECT_NAME_UPPER} Version: ${PROJECT_VERSION}")

  # Ensure compiling for C++17
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS ON)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

  if(BUILD_SHARED_LIBS)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
  endif()
  
  # Use GNU installation directories
  include(GNUInstallDirs)
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

  # CMake CCache
  find_program(CCACHE_EXE ccache)
  if(CCACHE_EXE)
    set(CMAKE_CXX_COMPILER_LAUNCHER ${CCACHE_EXE})
    set(CMAKE_CC_COMPILER_LAUNCHER ${CCACHE_EXE})
  endif()

  set(CMAKE_BUILD_TYPES "" None Debug Release Profile RelWithDebugInfo MinSizeRel)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS ${CMAKE_BUILD_TYPES})
  if(NOT CMAKE_CXX_FLAGS_PROFILE)
    set(CMAKE_CXX_FLAGS_PROFILE "${CMAKE_CXX_FLAGS_RELEASE} -pg"
      CACHE STRING "Flags used by the compiler during profile builds." FORCE
    )
    set(CMAKE_C_FLAGS_PROFILE "${CMAKE_C_FLAGS_RELEASE} -pg"
      CACHE STRING "Flags used by the compiler during profile builds." FORCE
    )
    set(CMAKE_EXE_LINKER_FLAGS_PROFILE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -pg"
      CACHE STRING "Flags used by the linker during profile builds." FORCE
    )
    set(CMAKE_SHARED_LINKER_FLAGS_PROFILE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} -pg"
      CACHE STRING "Flags used by the linker during profile builds." FORCE
    )
    mark_as_advanced(
      CMAKE_CXX_FLAGS_PROFILE
      CMAKE_C_FLAGS_PROFILE
      CMAKE_EXE_LINKER_FLAGS_PROFILE
      CMAKE_SHARED_LINKER_FLAGS_PROFILE
    )
  endif()

  if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'Release' as none was specified.")
    set(CMAKE_BUILD_TYPE "Release" CACHE
      STRING "Choose the type of build." FORCE
    )
  endif()

  if(NOT CMAKE_BUILD_TYPE IN_LIST CMAKE_BUILD_TYPES)
    message(FATAL_ERROR "CMAKE_BUILD_TYPE should be one of ${CMAKE_BUILD_TYPES}")
  endif()

  option(BUILD_TESTS "Build test suites" ON)
  option(BUILD_DOCS "Build documentation" ON)
  option(ENABLE_COVERAGE "Enable code coverage instrumentation" OFF)
  option(ENABLE_LINT "Enable source code linting" OFF)

  if(BUILD_TESTS)
    enable_testing()
  endif()

  if(ENABLE_LINT)
    find_program(CLANGTIDY_EXE clang-tidy)
    if(CLANGTIDY_EXE)
      set(CMAKE_CXX_CLANG_TIDY ${CLANGTIDY_EXE})
      set(CMAKE_C_CLANG_TIDY ${CLANGTIDY_EXE})
    endif()

    find_program(CPPLINT_EXE cpplint)
    if(CPPLINT_EXE)
      set(CMAKE_CXX_CPPLINT ${CPPLINT_EXE} --quiet)
    endif()
  endif()

endmacro(libsersi_project_defaults)
