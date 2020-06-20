/*
 * @Author: cpu_code
 * @Date: 2020-06-19 11:16:36
 * @LastEditTime: 2020-06-19 12:00:13
 * @FilePath: \ccourse\use_class\friend\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "mytime.h"

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida <<"; " << tosca << endl;

    temp = aida + tosca;     // operator+()
    cout << "Aida + Tosca: " << temp << endl;

    temp = aida * 1.17;  // member operator*()
    cout << "Aida * 1.17 == " << temp << endl;
    cout << "10.0 * Tosca == " << 10.0 * tosca << endl;

	// std::cin.get();

    return 0; 
}

/*
Aida and Tosca:
3 hours, 35 minutes; 2 hours, 48 minutes
Aida + Tosca: 6 hours, 23 minutes
Aida * 1.17 == 4 hours, 11 minutes
10.0 * Tosca == 28 hours, 0 minutes
*/