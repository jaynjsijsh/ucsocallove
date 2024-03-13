#include "Game.h" // Include the header file for the Game class
#include <gtest/gtest.h> // Include the Google Test framework

// Define a test fixture to set up common test data
class GameTest : public ::testing::Test {
protected:
    Game game; // Instance of the Game class for testing
};

// Test the StartGame method
TEST_F(GameTest, StartGameTest) {
    // Since StartGame doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.StartGame());
}

// Test the PromptSubMenu method
TEST_F(GameTest, PromptSubMenuTest) {
    // Since PromptSubMenu doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.PromptSubMenu());
}

// Test the DisplayHowToPlay method
TEST_F(GameTest, DisplayHowToPlayTest) {
    // Since DisplayHowToPlay doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.DisplayHowToPlay());
}

// Test the DisplayQuitScreen method
TEST_F(GameTest, DisplayQuitScreenTest) {
    // Since DisplayQuitScreen doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.DisplayQuitScreen());
}

// Test the GameDescription method
TEST_F(GameTest, GameDescriptionTest) {
    // Since GameDescription doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.GameDescription());
}

// Test the DisplayOrientation method
TEST_F(GameTest, DisplayOrientationTest) {
    // Since DisplayOrientation doesn't return anything, we can only test that it runs without errors
    EXPECT_NO_THROW(game.DisplayOrientation());
}

