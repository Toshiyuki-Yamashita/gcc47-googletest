#include "stock.hpp"
#include <gtest/gtest.h>

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

TEST_F(StockTest, test_stock_check_120yen) {
  tddbc::Stock stock;
  EXPECT_TRUE(stock.getCheck(120));
}

TEST_F(StockTest, test_stock_check_100yen) {
  tddbc::Stock stock;
  EXPECT_FALSE(stock.getCheck(100));
}

TEST_F(StockTest, test_stock_check_100yen_0) {
  tddbc::Stock stock(0);
  EXPECT_FALSE(stock.getCheck(100));
}

TEST_F(StockTest, test_stock_count0) {
  tddbc::Stock stock(0);
  EXPECT_EQ(0, stock.getCount());
}

TEST_F(StockTest, test_stock_check_120yen_0) {
  tddbc::Stock stock(0);
  EXPECT_FALSE(stock.getCheck(120));
}
