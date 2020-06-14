/*
 * @Author: cpu_code
 * @Date: 2020-06-14 16:11:55
 * @LastEditTime: 2020-06-14 16:17:10
 * @FilePath: \ccourse\introduction\size.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
题目描述
确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）。 
输入描述:
无
输出描述:
不同整型数据类型在内存中占多大（字节），具体格式详见输出样例，
输出样例中的?为不同整型数据类型在内存中占的字节数。输出样例如下：
The size of short is ? bytes.
The size of int is ? bytes.
The size of long is ? bytes.
The size of long long is ? bytes.
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "The size of short is " << sizeof(short) << " bytes." << endl;
    cout << "The size of int is " << sizeof(int) << " bytes." << endl;
    cout << "The size of long is " << sizeof(long) << " bytes." << endl;
    cout << "The size of long long is " << sizeof(long long) << " bytes." << endl;
    
    return 0;
}