#include "stock.hpp"

namespace tddbc {
Stock::Stock(int stock) { stock_count = stock; }

std::string Stock::getJuiceName() { return "coke"; }

int Stock::getCount() { return stock_count; }

int Stock::getPrice() { return 120; }

bool Stock::getCheck(int total) {
  return getPrice() <= total && getCount() > 0;
}
}
