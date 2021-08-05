cmake_minimum_required(VERSION 3.0.0)
project(Project1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(lib)

add_executable(Project1 main.cpp)
target_link_libraries(Project1 point segment)
target_include_directories(Project1 PUBLIC ${CMAKE_SOURCE_DIR}/lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
