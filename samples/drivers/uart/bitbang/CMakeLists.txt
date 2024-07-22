cmake_minimum_required(VERSION 3.25.0)

set(EXTRA_ZEPHYR_MODULES ${EXTRA_ZEPHYR_MODULES} ${CMAKE_CURRENT_SOURCE_DIR}/../../../..)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(uart_bitbang)

target_sources(app PRIVATE src/main.c)