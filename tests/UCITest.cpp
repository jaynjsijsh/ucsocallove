#include <gtest/gtest.h>
#include "../header/UCI.h"
#include "../header/Character.h"

using namespace std;
#include <iostream>
#include <string>

// Test fixture for UCR class
class UCITest : public ::testing::Test {
protected:
    UCI *uci;

    void SetUp() override {
        // Initialize your UCR object here with some default parameters
        string playerName = "b";
        int ucimood = 0;
        vector<string> likes = {"Nature walks", "Volunteering"};
        vector<string> dislikes = {"Harshness", "Conflict-ridden situations"};
        uci = new UCI("Peta", ucimood, likes, dislikes, playerName);
    }

    void TearDown() override {
        delete uci;
    }
};

// Test the DisplayMoodPoints method
TEST_F(UCITest, DisplayMoodPointsTest) {
    // Test when mood points are 0
    EXPECT_EQ(uci->GetMoodPoints(), 0);
    // Check the output when mood points are 0
    testing::internal::CaptureStdout();
    uci->DisplayMoodPoints();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 0\nPeta thinks you are a stranger... :/\n");
    
    // Test when mood points are greater than 10
    uci->IncreaseMoodPoints(15);
    EXPECT_EQ(uci->GetMoodPoints(), 15);
    // Check the output when mood points are greater than 10
    testing::internal::CaptureStdout();
    uci->DisplayMoodPoints();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Mood Points: 15\nPeta thinks you are a lover!! <3\n");
}

TEST_F(UCITest, IncreaseMoodPointsTest){
    uci->IncreaseMoodPoints(-15);
    ASSERT_EQ(uci->GetMoodPoints(),-15);
    //ucr->IncreaseMoodPoints(-20);
    // ASSERT_EQ(ucr->GetMoodPoints(), -20);
    // ucr->IncreaseMoodPoints(15);
    // ASSERT_EQ(ucr->GetMoodPoints(), -5);
}

TEST_F(UCITest, GetNameTest){
    ASSERT_EQ(uci->GetName(), "Peta");
}

TEST_F(UCITest, GetLikesTest){
     EXPECT_EQ(uci->GetLikes().back(), "Volunteering");
 }


TEST_F(UCITest, GetDislikesTest){
     EXPECT_EQ(uci->GetDislikes().back(), "Conflict-ridden situations");
 }
