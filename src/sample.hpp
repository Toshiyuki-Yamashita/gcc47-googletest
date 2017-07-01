#include <string>

namespace tddbc {
  class VendingMachine
  {
    int total;
    public:
    VendingMachine();
    bool insert(const int& amount);
    int getTotal();
    int payback();
  };
}
