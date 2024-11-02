cmake_minimum_required(VERSION 3.29)
project(PJC)

add_subdirectory(PJC_01)
add_subdirectory(PJC_02)
add_subdirectory(PJC_03)
add_subdirectory(PJC_04)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 11.0.2
)

FetchContent_MakeAvailable(fmt)

add_executable(PJC main.cpp)
target_link_libraries(PJC fmt)
