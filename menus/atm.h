#ifndef TESTINGCPP_ATM_H
#define TESTINGCPP_ATM_H
#include "iMenu.h"
#include <iostream>
using namespace std;

class atm: iMenu {
public:
    void ShowMenu()
    {
        cout << "-----------MENU-----------" << '\n';
        cout << "1. Check Balance" << '\n';
        cout << "2. Deposit" << '\n';
        cout << "1. Withdraw" << '\n';
        cout << "--------------------------" << '\n';
    }

};


#endif //TESTINGCPP_ATM_H
