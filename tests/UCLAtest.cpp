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

TEST_F(UCLATest, IncreaseMoodPointsTest){
    ucla->IncreaseMoodPoints(-15);
    ASSERT_EQ(ucla->GetMoodPoints(),-15);
   
}

TEST_F(UCLATest, GetNameTest){
    ASSERT_EQ(ucla->GetName(), "Angel");
}

TEST_F(UCLATest, GetLikesTest){
     EXPECT_EQ(ucla->GetLikes().back(), "Ambition");
 }


TEST_F(UCLATest, GetDislikesTest){
     EXPECT_EQ(ucla->GetDislikes().back(), "Inactivity");
 }
