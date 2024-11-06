cmake_minimum_required(VERSION 3.10)
project(ProjectName)

# Find all .cpp files in the src/ directory, this isn't a best practice because it makes cmake not know what to build when things are changed supposedly?
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

set(CMAKE_CXX_STANDARD 17)

enable_testing ()

include_directories (${PROJECT_BINARY_DIR}/ext/include)
link_directories (${PROJECT_BINARY_DIR}/ext/lib)

add_subdirectory (ext)
add_subdirectory (src)
#add_subdirectory (test)
