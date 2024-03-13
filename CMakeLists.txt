cmake_minimum_required(VERSION 3.20)
add_subdirectory(googletest)

include_directories(header)
set(SOURCES
    src/Character.cpp
    src/SlowTyping.cpp
    src/UCR.cpp
    src/main.cpp
   
)

add_executable(test 
tests/UCRTest.cpp
tests/SlowTypingTest.cpp
)

target_link_libraries(test gtest gtest_main pthread)