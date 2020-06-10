/*
 * @Author: cpu_code
 * @Date: 2020-06-10 11:39:42
 * @LastEditTime: 2020-06-10 11:44:05
 * @FilePath: \ccourse\complex_type\address.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 使用&运算符查找地址
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value == " << donuts << endl;
    cout << "donuts address == " << &donuts << endl;
    // NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)

    cout << "cups value == " << cups << endl;
    cout << "cups address == " << &cups << endl;

    // cin.get();

    return 0; 
}

/*
donuts value == 6
donuts address == 0135FEF0
cups value == 4.5
cups address == 0135FEE0
*/
