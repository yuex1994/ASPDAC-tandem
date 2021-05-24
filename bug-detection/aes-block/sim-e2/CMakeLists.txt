# CMakeLists.txt for tandem_AES
cmake_minimum_required(VERSION 3.8)
project(tandem_AES LANGUAGES CXX)
set(CMAKE_CXX_FLAGS -O3)
set(CMAKE_BUILD_TYPE Debug)
option(ILATOR_VERBOSE "Enable instruction sequence logging" OFF)
option(JSON_SUPPORT "Build JSON parser support" OFF)
find_package(verilator)

AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/ TANDEM_SRC)
add_library(AES_src ${TANDEM_SRC})

target_include_directories(AES_src PUBLIC ${PROJECT_SOURCE_DIR}/include)

verilate(AES_src
  INCLUDE_DIRS ../verilog-e2/
  SOURCES ../verilog-e2/aes_top.v
  VERILATOR_ARGS --timescale "1ns/10ps"
)

add_executable(tandem-AES-exe app/main.cc)
target_link_libraries(tandem-AES-exe PUBLIC AES_src)
target_include_directories(tandem-AES-exe PUBLIC ${PROJECT_SOURCE_DIR}/include)
