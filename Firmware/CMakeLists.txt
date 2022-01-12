# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(PICO_BOARD "USBQuadStep")
set(PICO_SDK_FETCH_FROM_GIT on)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
# set(PICO_SDK_PATH "/usr/share/pico-sdk")
set(PICO_BOARD_HEADER_DIRS "${CMAKE_SOURCE_DIR}")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(${PICO_BOARD} C CXX ASM)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(${PICO_BOARD} ${PICO_BOARD}.cpp )

pico_set_program_name(${PICO_BOARD} "${PICO_BOARD}")
pico_set_program_description(${PICO_BOARD} "Quad TMC2209 Stepper Driver Module Carrier Board")
pico_set_program_version(${PICO_BOARD} "0.1")
pico_set_program_url(${PICO_BOARD} "www.rbts.co/uqs")

pico_enable_stdio_uart(${PICO_BOARD} 0)
pico_enable_stdio_usb(${PICO_BOARD} 1)

# Add the standard library to the build
target_link_libraries(${PICO_BOARD} pico_stdlib)

pico_add_extra_outputs(${PICO_BOARD})

