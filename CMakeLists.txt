cmake_minimum_required(VERSION 3.15)

project(Redox LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find LLVM
find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
llvm_map_components_to_libnames(llvm_libs core irreader bitreader support)

# Add subdirectories
add_subdirectory(src/ast)
add_subdirectory(src/lexer)
add_subdirectory(src/parser)
add_subdirectory(src/semantic)
add_subdirectory(src/codegen)
add_subdirectory(src/utils)

# Main executable
add_executable(redox src/main.cpp)
target_link_libraries(redox 
    redox_ast
    redox_lexer
    redox_parser
    redox_semantic
    redox_codegen
    redox_utils
    ${llvm_libs}
)
