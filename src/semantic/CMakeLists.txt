file(GLOB SOURCES *.cpp)
add_library(redox_semantic STATIC ${SOURCES})
target_include_directories(redox_semantic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
