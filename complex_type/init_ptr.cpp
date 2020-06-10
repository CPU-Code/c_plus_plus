/*
 * @Author: cpu_code
 * @Date: 2020-06-10 12:09:00
 * @LastEditTime: 2020-06-10 12:11:14
 * @FilePath: \ccourse\complex_type\init_ptr.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 将指针初始化为一个地址
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    int higgens = 5;
    int * pt = &higgens;

    cout << "Value of higgens == " << higgens << endl;
    cout << "Address of &higgens == " << &higgens << endl;
    cout << "Value of *pt == " << *pt << endl;
    cout << "Address of pt == " << pt << endl;

    // cin.get();
    
    return 0; 
}

/*
Value of higgens == 5
Address of &higgens == 0097FC9C
Value of *pt == 5
Address of pt == 0097FC9C
*/