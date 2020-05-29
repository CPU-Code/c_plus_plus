/*
 * @Author: cpu_code
 * @Date: 2020-05-28 21:49:44
 * @LastEditTime: 2020-05-28 22:19:11
 * @FilePath: \ccourse\1_first\5_fun.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

void simon(int);    // 声明

int main()
{
    using namespace std;
    int count;

    simon(3);       // 调用，传参

    cout << "Pick an integer: ";
    cin >> count;

    simon(count);   // 再次调用

	// cin.get();
    // cin.get();

    return 0;
}

void simon(int n)   // 定义
{
    using namespace std;

    cout << "n == " << n << endl;
}

/* 
n == 3
Pick an integer: 10
n == 10
*/