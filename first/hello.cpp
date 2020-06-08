/*
 * @Author: cpu_code
 * @Date: 2020-06-01 18:15:30
 * @LastEditTime: 2020-06-01 18:16:25
 * @FilePath: \ccourse\1_first\hello.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> //标准输入输出流  in输入  out 输出
//using namespace std;//使用命名空间 std 打开一个叫std房间

//函数入口地址
int main()
{
	// cout 标准的输出
	// <<  左移运算符
	// endl 结束换行
	std::cout << "hello world" << 123456 << std::endl;

	system("pause"); //阻塞功能

	return EXIT_SUCCESS; //返回正常退出
}

/*
hello world123456
*/