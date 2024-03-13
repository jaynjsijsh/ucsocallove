cmake_minimum_required(VERSION 3.20)
add_subdirectory(googletest)

#include_directories(header)
set(SOURCES
    src/Character.cpp
    src/SlowTyping.cpp
    src/main.cpp
    src/UCR.cpp
   
)

add_executable(runAllTest 
tests/UCRTest.cpp
tests/SlowTypingTest.cpp
${SOURCES}
)

target_link_libraries(runAllTest gtest gtest_main )