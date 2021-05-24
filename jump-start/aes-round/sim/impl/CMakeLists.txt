AUX_SOURCE_DIRECTORY(./ IMPL_FILES)
set(CMAKE_CXX_FLAGS -O0)
include_directories(include)
add_library(impl ${IMPL_FILES})
