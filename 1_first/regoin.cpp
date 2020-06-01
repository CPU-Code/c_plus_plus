/*
 * @Author: cpu_code
 * @Date: 2020-06-01 18:17:38
 * @LastEditTime: 2020-06-01 18:19:20
 * @FilePath: \ccourse\1_first\regoin.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

void test01();

int atk = 200;

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

void test01()
{
	int atk = 100;

	cout << "局部atk ： " << atk << endl;
	//双冒号 作用域运算符  ::全局作用域
	cout << "全局作用域 atk ： " << ::atk << endl;
}

/*
局部atk ： 100
全局作用域 atk ： 200
*/