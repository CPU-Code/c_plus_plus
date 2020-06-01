/*
 * @Author: cpu_code
 * @Date: 2020-06-01 17:27:40
 * @LastEditTime: 2020-06-01 17:28:47
 * @FilePath: \ccourse\9_class\3_use_class.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "1_class_interface.h"

int main()
{
    Stock fluffy_the_cat;

    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();

    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();

    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();

    fluffy_the_cat.buy(300000,40.125);
    fluffy_the_cat.show();

    fluffy_the_cat.sell(300000,0.125);
    fluffy_the_cat.show();

    // std::cin.get();
    
    return 0;
}