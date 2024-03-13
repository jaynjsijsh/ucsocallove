#include "gtest/gtest.h"
#include "../header/SlowTyping.h"
#include <sstream>
#include <iostream>

class SlowTypingTest : public ::testing::Test {
protected:
    std::stringstream ss;
};

TEST_F(SlowTypingTest, TestEmptyString) {
    SlowTyping str("");
    ss << str;
    EXPECT_EQ(ss.str(), "");
}

TEST_F(SlowTypingTest, TestSingleCharacter) {
    SlowTyping str("a");
    ss.str(""); // Clear the stringstream
    ss << str;
    EXPECT_EQ(ss.str(), "a");
}

TEST_F(SlowTypingTest, TestMultipleCharacters) {
    SlowTyping str("Hello, World!");
    ss.str(""); // Clear the stringstream
    ss << str;
    EXPECT_EQ(ss.str(), "Hello, World!");
}