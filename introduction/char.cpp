/*
 * @Author: cpu_code
 * @Date: 2020-06-14 22:07:36
 * @LastEditTime: 2020-06-14 22:07:57
 * @FilePath: \ccourse\introduction\char.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
题目描述
输入一个字符，用它构造一个三角形金字塔。
输入描述:
输入只有一行，一个字符。
输出描述:
该字符构成的三角形金字塔。
示例1
输入
复制
1
输出
复制
    1
   1 1
  1 1 1
 1 1 1 1
1 1 1 1 1
 */
#include <iostream>

using namespace std;

int main()
{
    char str = 0;
    int i = 0;
    int j = 0;
    int n = 5;
    
    cin >> str;
    
    for(i = 1; i <= n ; i++)
    {
        for(j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    
    return 0;
}