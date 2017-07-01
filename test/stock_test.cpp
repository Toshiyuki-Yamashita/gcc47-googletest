#include <gtest/gtest.h>
#include "stock.hpp"

class StockTest : public ::testing::Test {

protected:

  StockTest() {}

  virtual void SetUp() {}
  virtual void TearDown() {}
};

TEST_F(StockTest, test_stock_coke) {
    tddbc::Stock stock;
    EXPECT_EQ("coke", stock.getJuiceName());
}

TEST_F(StockTest, test_stock_count) {
    tddbc::Stock stock;
    EXPECT_EQ(5, stock.getCount());
}

TEST_F(StockTest, test_stock_price) {
    tddbc::Stock stock;
    EXPECT_EQ(120, stock.getPrice());
}