/*
 * @Author: cpu_code
 * @Date: 2020-06-11 09:47:12
 * @LastEditTime: 2020-06-11 19:38:39
 * @FilePath: \ccourse\class\ob_array\usestock.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "stock.h"

const int STKS = 4;
int main()
{
    // create an array of initialized objects
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
        };

    std::cout << "Stock holdings:\n";

    int st;
    for (st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }

    // set pointer to first element
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
    {
        top = &top->topval(stocks[st]);
    }

    // now top points to the most valuable holding
    std::cout << "\nMost valuable holding:\n";

	top->show();

    // std::cin.get();

    return 0; 
}

/*
Stock holdings:
in show()
Company == NanoSmart
Shares == 12
share_val == 20.000total_val == 240.00
exit show()
in show()
Company == Boffo Objects
Shares == 200
share_val == 2.000total_val == 400.00
exit show()
in show()
Company == Monolithic Obelisks
Shares == 130
share_val == 3.250total_val == 422.50
exit show()
in show()
Company == Fleep Enterprises
Shares == 60
share_val == 6.500total_val == 390.00
exit show()

Most valuable holding:
in show()
Company == Monolithic Obelisks
Shares == 130
share_val == 3.250total_val == 422.50
exit show()
*/