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
TEST_F(UCSBTest, IncreaseMoodPointsTest){
    ucsb->IncreaseMoodPoints(-15);
    ASSERT_EQ(ucsb->GetMoodPoints(),-15);
   
}
TEST_F(UCSBTest, GetNameTest){
    ASSERT_EQ(ucsb->GetName(), "Santi");
}

TEST_F(UCSBTest, GetLikesTest){
     EXPECT_EQ(ucsb->GetLikes().back(), "Nature");
 }


TEST_F(UCSBTest, GetDislikesTest){
     EXPECT_EQ(ucsb->GetDislikes().back(), "Inactivity");
 }