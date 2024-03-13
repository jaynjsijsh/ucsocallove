cmake_minimum_required(VERSION 3.20)
add_subdirectory(googletest)

include_directories(header)
set(SOURCE_FILES 
src/Character.cpp
src/SlowTyping.cpp
src/UCSB.cpp
)
add_executable(main src/main.cpp ${SOURCE_FILES})



set(TEST_FILES 
tests/SlowTypingTest.cpp
tests/UCSBTest.cpp)
add_executable(runAllTest test ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(runAllTest gtest gtest_main )