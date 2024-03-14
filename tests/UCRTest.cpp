#include <gtest/gtest.h>
#include "../header/UCR.h"
#include "../header/Character.h"

using namespace std;
#include <iostream>
#include <string>

// Test fixture for UCR class
class UCRTest : public ::testing::Test {
protected:
    UCR *ucr;

    void SetUp() override {
        // Initialize your UCR object here with some default parameters
        string playerName = "b";
        int ucrmood = 0;
        vector<string> likes = {"Music Festivals", "Nature"};
        vector<string> dislikes = {"Processed Foods", "Inactivity"};
        ucr = new UCR("Scotty", ucrmood, likes, dislikes, playerName);
    }

    void TearDown() override {
        delete ucr;
    }
};

// Test the DisplayMoodPoints method
TEST_F(UCRTest, DisplayMoodPointsTest) {
    // Test when mood points are 0
    EXPECT_EQ(ucr->GetMoodPoints(), 0);
    // Check the output when mood points are 0
    testing::internal::CaptureStdout();
    ucr->DisplayMoodPoints();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 0\nScotty thinks you are a stranger... :/\n");
    
    // Test when mood points are greater than 10
    ucr->IncreaseMoodPoints(15);
    EXPECT_EQ(ucr->GetMoodPoints(), 15);
    // Check the output when mood points are greater than 10
    testing::internal::CaptureStdout();
    ucr->DisplayMoodPoints();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 15\nScotty thinks you are a lover!! <3\n");
}

TEST_F(UCRTest, IncreaseMoodPointsTest){
    ucr->IncreaseMoodPoints(-15);
    ASSERT_EQ(ucr->GetMoodPoints(),-15);
   
}

TEST_F(UCRTest, GetNameTest){
    ASSERT_EQ(ucr->GetName(), "Scotty");
}

TEST_F(UCRTest, GetLikesTest){
     EXPECT_EQ(ucr->GetLikes().back(), "Nature");
 }


TEST_F(UCRTest, GetDislikesTest){
     EXPECT_EQ(ucr->GetDislikes().back(), "Inactivity");
 }


