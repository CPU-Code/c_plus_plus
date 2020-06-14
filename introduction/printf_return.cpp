/*
 * @Author: cpu_code
 * @Date: 2020-06-14 17:49:15
 * @LastEditTime: 2020-06-14 17:49:31
 * @FilePath: \ccourse\introduction\printf_return.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
输入描述:
无
输出描述:
包括两行：
第一行为“Hello world!”
第二行为printf(“Hello world!”)调用后的返回值。
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    a = printf("Hello world!");
    cout << endl << a << endl;
    
    return 0;
}
