#include <gtest/gtest.h>
#include "../header/UCLA.h"
#include "../header/Character.h"

using namespace std;
#include <iostream>
#include <string>

// Test fixture for UCR class
class UCLATest : public ::testing::Test {
protected:
    UCLA *ucla;

    void SetUp() override {
        // Initialize your UCR object here with some default parameters
        string playerName = "b";
        int uclamood = 0;
        vector<string> likes = {"Museums", "Ambition"};
        vector<string> dislikes = {"Lazy People", "Inactivity"};
        ucla = new UCLA("Angel", uclamood, likes, dislikes, playerName);
    }

    void TearDown() override {
        delete ucla;
    }
};

// Test the DisplayMoodPoints method
TEST_F(UCLATest, DisplayMoodPointsTest) {
    // Test when mood points are 0
    EXPECT_EQ(ucla->GetMoodPoints(), 0);
    // Check the output when mood points are 0
    testing::internal::CaptureStdout();
    ucla->DisplayMoodPoints();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 0\nAngel thinks you are a stranger... :/\n");
    
    // Test when mood points are greater than 10
    ucla->IncreaseMoodPoints(15);
    EXPECT_EQ(ucla->GetMoodPoints(), 15);
    // Check the output when mood points are greater than 10
    testing::internal::CaptureStdout();
    ucla->DisplayMoodPoints();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 15\nAngel thinks you are a lover!! <3\n");
}

// // Test the DisplayCoffeeScene method
// TEST_F(UCRTest, DisplayCoffeeSceneTest) {
//     // Test for different drink choices
//     // Scenario: Player chooses an iced latte (option 3)
//     testing::internal::CaptureStdout();
//     ucr->DisplayCoffeeScene(3);
//     std::string output = testing::internal::GetCapturedStdout();
//     EXPECT_NE(output.find("Scotty: Omgmg I LOVEEEE iced Lattes."), std::string::npos);
//     EXPECT_EQ(ucr->GetLikes().size(), 3); // Expecting the likes vector to increase

//     // Scenario: Player rejects hanging out
//     ucr->IncreaseMoodPoints(5); // Set mood points to a positive value
//     testing::internal::CaptureStdout();
//     ucr->DisplayCoffeeScene(1);
//     output = testing::internal::GetCapturedStdout();
//     EXPECT_NE(output.find("Scotty: Oh... okay, I understand. Maybe next time."), std::string::npos);
//     EXPECT_EQ(ucr->GetMoodPoints(), -5); // Expecting a decrease in mood points
// }