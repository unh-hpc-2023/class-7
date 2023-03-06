#include <gtest/gtest.h>

int bowlingScore(const std::vector<int>& rolls)
{
  int score = 0;
  int i = 0;
  for (int frame = 0; frame < 10; frame++) {
    score += rolls[i] + rolls[i + 1];
    i += 2;
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

TEST(Bowling, GameWithSpare)
{
  std::vector<int> rolls = {
    0, 0, 2, 3, 4, 6, 3, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5,
  };
  EXPECT_EQ(bowlingScore(rolls), 5 + 13 + 8 + 9);
}
