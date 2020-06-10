/*
 * @Author: cpu_code
 * @Date: 2020-06-10 19:14:00
 * @LastEditTime: 2020-06-10 19:20:28
 * @FilePath: \ccourse\complex_type\choices.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++0x

/**
 * @function: 数组、 vector对象和array对象
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: array对象和数组存储在相同的内存区域（即栈） 中，
 *          而vector对象存储在另一个区域（自由存储区或堆） 
 */
int main()
{
    using namespace std;

// C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
// C++98 STL
    vector<double> a2(4);   // create vector with 4 elements
// no simple way to initialize in C98
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
// C++0x -- create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};  
    array<double, 4> a4;
    a4 = a3;     // valid for array objects of same size
// use array notation

    cout << "a1[2] == " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2] == " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2] == " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2] == " << a4[2] << " at " << &a4[2] << endl;
// misdeed
    a1[-2] = 20.2;

    cout << "a1[-2] == " << a1[-2] <<" at " << &a1[-2] << endl;
    cout << "a3[2] == " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2] == " << a4[2] << " at " << &a4[2] << endl;

    //  cin.get();

    return 0;
}

/*
a1[2] == 3.6 at 00C8F82C
a2[2] == 0.142857 at 015C2E08
a3[2] == 1.62 at 00C8F7E8
a4[2] == 1.62 at 00C8F7C0
a1[-2] == 20.2 at 00C8F80C
a3[2] == 1.62 at 00C8F7E8
a4[2] == 1.62 at 00C8F7C0
*/