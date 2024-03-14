#include "Game.h" // Include the header file for the Game class
#include <gtest/gtest.h> // Include the Google Test framework

// Define a test fixture to set up common test data
class GameTest : public ::testing::Test {
protected:
    Game game; // Instance of the Game class for testing
};

// Test the StartGame method
TEST_F(GameTest, StartGameTest) {
    EXPECT_NO_THROW(game.StartGame());
}

// Test the PromptSubMenu method
TEST_F(GameTest, PromptSubMenuTest) {
    EXPECT_NO_THROW(game.PromptSubMenu());
}

// Test the DisplayHowToPlay method
TEST_F(GameTest, DisplayHowToPlayTest) {
    EXPECT_NO_THROW(game.DisplayHowToPlay());
}



TEST_F(GameTest, GameDescriptionTest) {
    EXPECT_NO_THROW(game.GameDescription());
}

// Test the DisplayOrientation method
TEST_F(GameTest, DisplayOrientationTest) {
    EXPECT_NO_THROW(game.DisplayOrientation());
}

