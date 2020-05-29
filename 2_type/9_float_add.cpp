/*
 * @Author: cpu_code
 * @Date: 2020-05-29 18:06:44
 * @LastEditTime: 2020-05-29 19:43:20
 * @FilePath: \ccourse\2_type\9_float_add.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>

//精度问题
int main()
{
    using namespace std;

    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    // cin.get();

    return 0; 
}

/*
a = 2.34e+022
b - a = 0
*/