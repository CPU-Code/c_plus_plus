/*
 * @Author: cpu_code
 * @Date: 2020-06-19 10:23:07
 * @LastEditTime: 2020-06-19 10:31:38
 * @FilePath: \ccourse\use_class\operator\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "mytime.h"

int main()
{
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;
 
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    // operator notation
    cout << "total == coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "morefixing time = ";
    morefixing.Show();
    cout << endl;

    total = morefixing.operator+(total);
    // function notation
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

    // std::cin.get();

    return 0;
}

/*
planning time = 0 hours, 0 minutes
coding time = 2 hours, 40 minutes
fixing time = 5 hours, 55 minutes
total == coding + fixing = 8 hours, 35 minutes
morefixing time = 3 hours, 28 minutes
morefixing.operator+(total) = 12 hours, 3 minutes
*/