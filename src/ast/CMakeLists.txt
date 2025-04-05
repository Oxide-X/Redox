file(GLOB SOURCES *.cpp)
add_library(redox_ast STATIC ${SOURCES})
target_include_directories(redox_ast PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
