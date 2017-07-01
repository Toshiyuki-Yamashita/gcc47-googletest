#include "stock.hpp"

namespace tddbc
{
    Stock::Stock()
    {
    }

    std::string Stock::getJuiceName()
    {
        return "coke";
    }

    int Stock::getCount()
    {
        return 5;
    }

    int Stock::getPrice()
    {
        return 120;
    }
}

