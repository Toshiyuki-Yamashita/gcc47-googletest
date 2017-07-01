#include <gtest/gtest.h>
#include "sample.hpp"

class SampleTest : public ::testing::Test {

protected:

  SampleTest() {}

  virtual void SetUp() {}
  virtual void TearDown() {}
};

TEST_F(SampleTest, test10yencoin) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE(vm.insert(10));
  EXPECT_EQ( 10, vm.getTotal());
}

TEST_F(SampleTest, test50yencoin) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE(vm.insert(50));
  EXPECT_EQ( 50, vm.getTotal());
}

TEST_F(SampleTest, test10yencoinand50yencoin) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE( vm.insert(10));
  EXPECT_TRUE(  vm.insert(50));
  EXPECT_EQ( 60, vm.getTotal());
}

TEST_F(SampleTest, test10yenPayBack) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE( vm.insert(10));
  EXPECT_EQ( 10, vm.payback());
}

TEST_F(SampleTest, test50yenPayBack) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE( vm.insert(50));
  EXPECT_EQ( 50, vm.payback());
}


TEST_F(SampleTest, test50yenPayBackAgain) {
  tddbc::VendingMachine vm;
  EXPECT_TRUE( vm.insert(50));
  EXPECT_EQ( 50, vm.payback());
  EXPECT_EQ( 0, vm.payback());
}

TEST_F(SampleTest, test1yenNotAdd) {
  tddbc::VendingMachine vm;
  EXPECT_FALSE( vm.insert(1));
  EXPECT_EQ( 0, vm.getTotal());
}

TEST_F(SampleTest, test10000yenNotAdd) {
  tddbc::VendingMachine vm;
  EXPECT_FALSE(vm.insert(10000));
  EXPECT_EQ( 0, vm.getTotal());
}



