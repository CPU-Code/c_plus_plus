/*
 * @Author: cpu_code
 * @Date: 2020-06-10 12:01:09
 * @LastEditTime: 2020-06-10 12:04:39
 * @FilePath: \ccourse\complex_type\pointer.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 指针的使用
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    int updates = 6;        // declare a variable
    int * p_updates;        // declare pointer to an int

    p_updates = &updates;   // assign address of int to pointer

    // express values two ways
    cout << "updates == " << updates <<endl;
    cout << "*p_updates == " << *p_updates << endl;

    // express address two ways
    cout << "&updates == " << &updates << endl;
    cout << "p_updates == " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "*p_updates + 1 == " << *p_updates <<endl;
    cout << "Now updates == " << updates << endl;

    // cin.get();

    return 0; 
}

/*
updates == 6
*p_updates == 6
&updates == 00BCF720
p_updates == 00BCF720
*p_updates + 1 == 7
Now updates == 7
*/