cmake_minimum_required (VERSION 3.8)

project ("cmake-project-with-macros")

set(MY_NAMESPACE_BEGIN "namespace my {")
set(MY_NAMESPACE_END "}")
add_executable (cmake-project-with-macros "cmake-project-with-macros.cpp")
target_compile_definitions(cmake-project-with-macros PUBLIC
  "MY_NAMESPACE_BEGIN=${MY_NAMESPACE_BEGIN}"
  "MY_NAMESPACE_END=${MY_NAMESPACE_END}"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cmake-project-with-macros PROPERTY CXX_STANDARD 20)
endif()
