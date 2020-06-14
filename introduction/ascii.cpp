/*
 * @Author: cpu_code
 * @Date: 2020-06-14 17:03:22
 * @LastEditTime: 2020-06-14 22:26:16
 * @FilePath: \ccourse\introduction\ascii.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
题目描述
BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。

73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33

输入描述:
无
输出描述:
转换输出题目中给出的所有ASCII到对应的字符。
 */

#include <iostream>

using namespace std;

int main()
{
    char a[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    int i = 0;

    for(i = 0; i < 12; i++)
    {
        cout << a[i] ;
    }
    
    return 0;
}