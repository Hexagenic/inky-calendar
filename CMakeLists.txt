cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)
include(pimoroni_pico_import.cmake)

project(inky_calendar C CXX ASM)
SET(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(inky_calendar src/main.cpp)

pico_add_extra_outputs(inky_calendar)

include(common/pimoroni_i2c)
include(libraries/inky_frame_7/inky_frame_7)

target_link_libraries(inky_calendar pico_stdlib inky_frame_7)
