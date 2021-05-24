# CMakeLists.txt for tandem_riscv
cmake_minimum_required(VERSION 3.8)
project(tandem_riscv LANGUAGES CXX)
set(CMAKE_CXX_FLAGS -O3)
set(CMAKE_BUILD_TYPE Debug)
option(ILATOR_VERBOSE "Enable instruction sequence logging" OFF)
option(JSON_SUPPORT "Build JSON parser support" OFF)
find_package(verilator)

AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/ TANDEM_SRC)
add_library(riscv_src ${TANDEM_SRC})

target_include_directories(riscv_src PUBLIC ${PROJECT_SOURCE_DIR}/include)

verilate(riscv_src
  INCLUDE_DIRS ../verilog/
  SOURCES ../verilog/picorv32_simple.v
  VERILATOR_ARGS --timescale "1ns/10ps"
 -Wno-lint -Wno-style)

add_executable(tandem-riscv-exe app/main.cc)
target_link_libraries(tandem-riscv-exe PUBLIC riscv_src)
target_include_directories(tandem-riscv-exe PUBLIC ${PROJECT_SOURCE_DIR}/include)
