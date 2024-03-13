#include <gtest/gtest.h>
#include "../header/UCSB.h"
#include "../header/Character.h"

using namespace std;
#include <iostream>
#include <string>

// Test fixture for UCR class
class UCSBTest : public ::testing::Test {
protected:
    UCSB *ucsb;

    void SetUp() override {
        // Initialize your UCR object here with some default parameters
        string playerName = "b";
        int ucsbmood = 0;
        vector<string> likes = {"Music Festivals", "Nature"};
        vector<string> dislikes = {"Processed Foods", "Inactivity"};
        ucsb = new UCSB("Santi", ucsbmood, likes, dislikes, playerName);
    }

    void TearDown() override {
        delete ucsb;
    }
};

// Test the DisplayMoodPoints method
TEST_F(UCSBTest, DisplayMoodPointsTest) {
    // Test when mood points are 0
    EXPECT_EQ(ucsb->GetMoodPoints(), 0);
    // Check the output when mood points are 0
    testing::internal::CaptureStdout();
    ucsb->DisplayMoodPoints();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 0\nSanti thinks you are a stranger... :/\n");
    
    // Test when mood points are greater than 10
    ucsb->IncreaseMoodPoints(15);
    EXPECT_EQ(ucsb->GetMoodPoints(), 15);
    // Check the output when mood points are greater than 10
    testing::internal::CaptureStdout();
    ucsb->DisplayMoodPoints();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 15\nSanti thinks you are a lover!! <3\n");
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