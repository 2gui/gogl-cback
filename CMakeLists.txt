
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(gogl-cbackend VERSION 0.1.0 LANGUAGES C)

set(CMAKE_BUILD_TYPE DEBUG)

file(GLOB_RECURSE sources ./src/*.c)

# dependencies for glfw3
find_library(COCOA_LIBRARY Cocoa REQUIRED)
find_library(IOKIT_LIBRARY IOKit REQUIRED)

# find_package(glfw3 REQUIRED)
find_file(GLFW_INCLUDES GLFW REQUIRED)
find_library(GLFW_LIBRARY glfw3 REQUIRED)
include_directories(${GLFW_INCLUDES}/..)

# find_package(Crpc REQUIRED)
find_file(CRPC_INCLUDES Crpc REQUIRED)
find_library(CRPC_LIBRARY Crpc REQUIRED)
include_directories(${CRPC_INCLUDES}/..)

#### GLAD
include_directories(./glad/include)
file(GLOB_RECURSE glad_sources ./glad/src/*.c)
list(APPEND sources ${glad_sources})

include_directories(./src)

message(STATUS "sources: ${sources}")

add_executable(gogl_cback ${sources})
target_link_libraries(gogl_cback ${COCOA_LIBRARY})
target_link_libraries(gogl_cback ${IOKIT_LIBRARY})
target_link_libraries(gogl_cback ${GLFW_LIBRARY})
target_link_libraries(gogl_cback ${CRPC_LIBRARY})
