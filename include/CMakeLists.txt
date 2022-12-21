# For a header library and include all .cpp files
add_library(segment segment.cpp)

# For header only library
add_library(point INTERFACE)
target_include_directories(point INTERFACE .)
