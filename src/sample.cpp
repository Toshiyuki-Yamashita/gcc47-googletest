#include "sample.hpp"

namespace tddbc {
  VendingMachine::VendingMachine():total(0)
  {

  }


  // amount OK
  // 10 円
  // 50円
  // 100円
  // 500円
  // 1000円
  bool VendingMachine::insert(const int& amount)
  {
    switch (amount){
      case 10:
      case 50:
      case 100:
      case 500:
      case 1000:
        total += amount;
        break;
      default:
         return false;      
    }
    return true;
  }

  int VendingMachine::payback()
 {
   int charge = getTotal();
   total = 0;
   return charge;
 }

  int VendingMachine::getTotal()
  {
    return total;
  }
}
