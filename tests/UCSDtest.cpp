#include <gtest/gtest.h>
#include "../header/UCSD.h"
#include "../header/Character.h"

using namespace std;
#include <iostream>
#include <string>

// Test fixture for UCSD class
class UCSDTest : public ::testing::Test {
protected:
    UCSD *ucsd;

    void SetUp() override {
        // Initialize your UCSD object here with some default parameters
        string playerName = "b";
        int ucsdmood = 0;
        vector<string> likes = {"Music Festivals", "Nature"};
        vector<string> dislikes = {"Processed Foods", "Inactivity"};
        ucsd = new UCSD("Tris", ucsdmood, likes, dislikes, playerName);
    }

    void TearDown() override {
        delete ucsd;
    }
};

// Test the DisplayMoodPoints method
TEST_F(UCSDTest, DisplayMoodPointsTest) {
    // Test when mood points are 0
    EXPECT_EQ(ucsd->GetMoodPoints(), 0);
    // Check the output when mood points are 0
    testing::internal::CaptureStdout();
    ucsd->DisplayMoodPoints();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 0\nTris thinks you are a stranger... :/\n");
    
    // Test when mood points are greater than 10
    ucsd->IncreaseMoodPoints(15);
    EXPECT_EQ(ucsd->GetMoodPoints(), 15);
    // Check the output when mood points are greater than 10
    testing::internal::CaptureStdout();
    ucsd->DisplayMoodPoints();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 15\nTris thinks you are a lover!! <3\n");
}
TEST_F(UCSDTest, IncreaseMoodPointsTest){
    ucsd->IncreaseMoodPoints(-15);
    ASSERT_EQ(ucsd->GetMoodPoints(),-15);
   
}
TEST_F(UCSDTest, GetNameTest){
    ASSERT_EQ(ucsd->GetName(), "Tris");
}

TEST_F(UCSDTest, GetLikesTest){
     EXPECT_EQ(ucsd->GetLikes().back(), "Nature");
 }


TEST_F(UCSDTest, GetDislikesTest){
     EXPECT_EQ(ucsd->GetDislikes().back(), "Inactivity");
 }