#include <gtest/gtest.h>

TEST(Bowling, AllZeros)
{
  std::vector<int> rolls = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  EXPECT_EQ(bowlingScore(rolls), 0);
}
