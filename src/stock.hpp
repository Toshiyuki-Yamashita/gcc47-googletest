#include <string>
namespace tddbc {
  class Stock
  {
    public:
    Stock();
    std::string getJuiceName();
    int getCount();
    int getPrice();
    bool getCheck(int total);
  };
}
