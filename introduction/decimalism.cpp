/*
 * @Author: cpu_code
 * @Date: 2020-06-14 17:27:44
 * @LastEditTime: 2020-06-14 17:28:50
 * @FilePath: \ccourse\introduction\decimalism.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/**
题目描述
BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。

输入描述:
无
输出描述:
十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
备注:
printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(15) << 0xABCDEF;
}