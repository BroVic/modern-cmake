# local library 
set(LIBSRC name.cpp)

add_library(libname ${LIBSRC})

target_include_directories(libname PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})