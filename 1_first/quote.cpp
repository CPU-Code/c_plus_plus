/*
 * @Author: cpu_code
 * @Date: 2020-06-01 22:30:46
 * @LastEditTime: 2020-06-01 22:37:50
 * @FilePath: \ccourse\1_first\quote.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//1、引用基本语法  Type &别名 = 原名
void test01()
{
	int a = 10;
	int &b = a;

	b = 20;

    cout << "test01()" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//2、引用必须初始化
void test02()
{
	//int &a; 必须初始化
	int a = 10;
	int &b = a; //引用初始化后不可以修改了
	int c = 20;

	b = c; //赋值！！！

    cout << "test02()" << endl;
    cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

//3、对数组建立引用
void test03()
{
	int arr[10];
	for (int i = 0; i < 10;i++)
	{
		arr[i] = i;
	}

    cout << "test03()" << endl;
	//给数组起别名
	int(&pArr)[10] = arr;
	for (int i = 0; i < 10;i++)
	{
		cout << "parr" << "[" << i << "]"<< ":" << pArr[i] << " ";
	}
	cout << endl;

	//第二种方式 起别名

	typedef int(ARRAYREF)[10]; //一个具有10个元素的int类型的数组
	ARRAYREF & pArr2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << "parr" << "[" << i << "]"<< ":" << pArr2[i] << " ";
	}
	cout << endl;
}

int main(){

	test01();
	cout << endl;

    test02();
	cout << endl;

	test03();

	system("pause");
	return EXIT_SUCCESS;
}

/*

a = 20
b = 20

test02()
a = 20
b = 20
c = 20

test03()
parr[0]:0 parr[1]:1 parr[2]:2 parr[3]:3 parr[4]:4 parr[5]:5 parr[6]:6 parr[7]:7 parr[8]:8 parr[9]:9
parr[0]:0 parr[1]:1 parr[2]:2 parr[3]:3 parr[4]:4 parr[5]:5 parr[6]:6 parr[7]:7 parr[8]:8 parr[9]:9
*/