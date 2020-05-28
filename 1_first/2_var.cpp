/*
 * @Author: cpu_code
 * @Date: 2020-05-28 21:15:15
 * @LastEditTime: 2020-05-28 21:20:18
 * @FilePath: \ccourse\1_first\2_var.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std;
    
    int num;            // 定义的变量
    
    num = 25;            // 赋值

    cout << "num == ";
    cout << num;        // 输出信息
    cout << endl;

    num = num - 1;  // 减法
    cout << "num == " << num << " == num -1 " << endl;
    // cin.get();

	return 0;
}

/* 输出结果： 
num == 25
num == 24 == num -1
 */