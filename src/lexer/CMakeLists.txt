file(GLOB SOURCES *.cpp)
add_library(redox_lexer STATIC ${SOURCES})
target_include_directories(redox_lexer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
