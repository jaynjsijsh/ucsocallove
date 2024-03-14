cmake_minimum_required(VERSION 3.20)
add_subdirectory(googletest)

include_directories(header)
set(SOURCE_FILES 
src/Character.cpp
src/SlowTyping.cpp
src/UCSB.cpp
src/UCR.cpp
src/UCLA.cpp
src/UCSD.cpp
src/UCI.cpp
src/Game.cpp)
add_executable(main src/main.cpp ${SOURCE_FILES})



set(TEST_FILES tests/UCLAtest.cpp
tests/UCSDtest.cpp
tests/SlowTypingTest.cpp
tests/UCSBTest.cpp
tests/UCRTest.cpp
tests/UCITest.cpp 
tests/GameTest.cpp)
add_executable(runAllTest tests ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(runAllTest gtest gtest_main)

