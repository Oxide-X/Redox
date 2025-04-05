file(GLOB SOURCES *.cpp)
add_library(redox_codegen STATIC ${SOURCES})
target_include_directories(redox_codegen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
