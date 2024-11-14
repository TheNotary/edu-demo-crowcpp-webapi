cmake_minimum_required(VERSION 3.15)
project(my_crow_app)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Crow CONFIG REQUIRED)

# Add the executable
add_executable(my_crow_app src/main.cpp)

# Link with Crow library
target_link_libraries(my_crow_app PUBLIC Crow::Crow)

