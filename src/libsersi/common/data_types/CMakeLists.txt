set(data_types_srcs
  ClockTime.cpp
  Vector3Double.cpp
  Vector3Float.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${data_types_srcs})
