# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "C:/Users/trevo/Documents/Coding/C++/pico/pico-sdk")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(my-lcd-test C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(my-lcd-test my-lcd-test.cpp )

pico_set_program_name(my-lcd-test "my-lcd-test")
pico_set_program_version(my-lcd-test "0.1")

pico_enable_stdio_uart(my-lcd-test 0)
pico_enable_stdio_usb(my-lcd-test 0)

# Add the standard library to the build
target_link_libraries(my-lcd-test pico_stdlib)

pico_add_extra_outputs(my-lcd-test)

