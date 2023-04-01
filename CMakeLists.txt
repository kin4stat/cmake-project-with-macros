# CMakeList.txt : CMake project for cmake-project-with-macros, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("cmake-project-with-macros")

# Add source to this project's executable.
set(MY_NAMESPACE_BEGIN "namespace my {")
set(MY_NAMESPACE_END "}")
add_executable (cmake-project-with-macros "cmake-project-with-macros.cpp" "cmake-project-with-macros.h")
target_compile_definitions(cmake-project-with-macros PUBLIC
  "MY_NAMESPACE_BEGIN=${MY_NAMESPACE_BEGIN}"
  "MY_NAMESPACE_END=${MY_NAMESPACE_END}"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cmake-project-with-macros PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
