#include <string>
namespace tddbc {
class Stock {
  int stock_count;

public:
  Stock(int stock = 5);
  std::string getJuiceName();
  int getCount();
  int getPrice();
  bool getCheck(int total);
};
}
