#include <gtest/gtest.h>
#include "sample.hpp"

class SampleTest : public ::testing::Test {

protected:

  SampleTest() {}

  virtual void SetUp() {}
  virtual void TearDown() {}
};

TEST_F(SampleTest, say_Hello_TDD_Boot_Camp) {
  EXPECT_EQ("Hello TDD BootCamp!", tddbc::say());
}
