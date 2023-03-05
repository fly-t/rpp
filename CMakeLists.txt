cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)
project(test_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


pico_sdk_init()

aux_source_directory(. DIR_SRCS)
aux_source_directory(rpp2040 DIR_SRCS)
aux_source_directory(demo DIR_SRCS)
add_executable(test ${DIR_SRCS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/rpp2040)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/demo)

# chose print output pripheral. 
pico_enable_stdio_usb(test 1)
pico_enable_stdio_uart(test 1)


# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(test)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(test pico_stdlib)