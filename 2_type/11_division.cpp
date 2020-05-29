/*
 * @Author: cpu_code
 * @Date: 2020-05-29 18:16:53
 * @LastEditTime: 2020-05-29 18:18:06
 * @FilePath: \ccourse\2_type\11_division.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

//整数与浮点除法

#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Integer division: 9/5 = " << 9 / 5  << endl;

    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;

    cout << "Mixed division: 9.0/5 = " << 9.0 / 5  << endl;
    
    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 <<  endl;

    cout << "float constants: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f <<  endl;

    // cin.get();

    return 0;
}

/*
Integer division: 9/5 = 1
Floating-point division: 9.0/5.0 = 1.800000
Mixed division: 9.0/5 = 1.800000
double constants: 1e7/9.0 = 1111111.111111
float constants: 1e7f/9.0f = 1111111.125000
*/