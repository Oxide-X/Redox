
# src/lexer/CMakeLists.txt
# lexer library
add_library(redox_lexer
    TokenType.cpp
    TokenType.h
    Token.h
)

# Include the current directory to make headers accessible
target_include_directories(redox_lexer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link necessary libraries if needed (e.g., LLVM if Lexer depends on LLVM)
# target_link_libraries(redox_lexer ${llvm_libs})
