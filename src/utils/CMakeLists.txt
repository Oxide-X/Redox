file(GLOB SOURCES *.cpp)
add_library(redox_utils STATIC ${SOURCES})
target_include_directories(redox_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
