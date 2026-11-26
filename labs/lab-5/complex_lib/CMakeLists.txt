add_library(complex_lib STATIC complex.cpp complex.h)
target_include_directories(complex_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
