file(GLOB SOURCES *.cpp)
add_library(redox_parser STATIC ${SOURCES})
target_include_directories(redox_parser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
