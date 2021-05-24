# CMakeLists.txt for tandem_GBHigh
cmake_minimum_required(VERSION 3.8)
project(tandem_GBHigh LANGUAGES CXX)
set(CMAKE_CXX_FLAGS -O3)
set(CMAKE_BUILD_TYPE Debug)
option(ILATOR_VERBOSE "Enable instruction sequence logging" OFF)
option(JSON_SUPPORT "Build JSON parser support" OFF)
find_package(verilator)

AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/ TANDEM_SRC)
add_library(GBHigh_src ${TANDEM_SRC})

target_include_directories(GBHigh_src PUBLIC ${PROJECT_SOURCE_DIR}/include)

verilate(GBHigh_src
  INCLUDE_DIRS ../verilog-e1/
  SOURCES ../verilog-e1/hls_target.v
  VERILATOR_ARGS --timescale "1ns/10ps"
 -Wno-lint -Wno-style)

add_executable(tandem-GBHigh-exe app/main.cc)
target_link_libraries(tandem-GBHigh-exe PUBLIC GBHigh_src)
target_include_directories(tandem-GBHigh-exe PUBLIC ${PROJECT_SOURCE_DIR}/include)
