/*
 * @Author: cpu_code
 * @Date: 2020-06-10 21:50:59
 * @LastEditTime: 2020-06-11 09:34:04
 * @FilePath: \ccourse\class\stock\usestock.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "stock.h"


/**
 * @function: 构造函数和析构函数
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
  {
    using std::cout;

    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);            // syntax 1
    stock1.show();
    Stock stock2 = Stock ("Boffo Objects", 2, 2.0); // syntax 2
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);    // temp object
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
  }

	// std::cin.get();

    return 0; 
}

/*
Using constructors to create new objects
in Stock
co == NanoSmart
in n >= 0
shares == 12
share_val == 20
in set_tot()
 total_val == shares * share_val ==240
exit set_tot()

share_val == 20
exit Stock

in show()
Company == NanoSmart
Shares == 12
share_val == 20.000
total_val == 240.00
exit show()

in Stock
co == Boffo Objects
in n >= 0
shares == 2
share_val == 2
in set_tot()
 total_val == shares * share_val ==4
exit set_tot()

share_val == 2
exit Stock

in show()
Company == Boffo Objects
Shares == 2
share_val == 2.000
total_val == 4.00
exit show()

Assigning stock1 to stock2:
Listing stock1 and stock2:
in show()
Company == NanoSmart
Shares == 12
share_val == 20.000
total_val == 240.00
exit show()

in show()
Company == NanoSmart
Shares == 12
share_val == 20.000
total_val == 240.00
exit show()

Using a constructor to reset an object
in Stock
co == Nifty Foods
in n >= 0
shares == 10
share_val == 50
in set_tot()
 total_val == shares * share_val ==500
exit set_tot()

share_val == 50
exit Stock

~Stock()Nifty Foods
Revised stock1:
in show()
Company == Nifty Foods
Shares == 10
share_val == 50.000
total_val == 500.00
exit show()

Done
~Stock()NanoSmart
~Stock()Nifty Foods
*/