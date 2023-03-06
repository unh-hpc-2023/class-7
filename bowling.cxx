#include <gtest/gtest.h>

int bowlingScore(const std::vector<int>& rolls)
{
  int score = 0;
  for (auto roll : rolls) {
    score += roll;
  }
  return score;
}

TEST(Bowling, AllZeros)
{
  std::vector<int> rolls = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  EXPECT_EQ(bowlingScore(rolls), 0);
}

TEST(Bowling, RegularGame)
{
  std::vector<int> rolls = {
    0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5,
  };
  EXPECT_EQ(bowlingScore(rolls), 14);
}
