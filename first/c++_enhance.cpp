/*
 * @Author: cpu_code
 * @Date: 2020-06-01 20:59:34
 * @LastEditTime: 2020-06-01 21:17:05
 * @FilePath: \ccourse\1_first\c++_enhance.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、全局变量检测增强
//int a;
int a = 10;

//2、函数检测增强 ,参数类型增强,返回值检测增强,函数调用参数检测增强
int getRectS(int w, int h)
{
	return w*h;
}

void test1()
{
	getRectS(10, 10);
    cout << "test1() " << endl;
}

//3、类型转换检测增强
void test2()
{
	char * p = (char*)malloc(sizeof(64)); //malloc返回值是void*
    cout << "test2() " << endl;
}

//4、struct 增强
struct Person
{
	int m_Age;

	void plusAge()
    { 
        m_Age++; 
    }; //c++中struct可以加函数
};

void test3()
{
	Person p1; //使用时候可以不加struct关键字
	p1.m_Age = 10;

    cout << "test3() " << endl;
	p1.plusAge();
	cout << "p1.m_Age : "<< p1.m_Age << endl;
    cout << endl;
}

//5、 bool类型增强 C语言中没有bool类型
bool flag = true; //只有真或假 true代表 真（非0）  false 代表假（0）

void test4()
{
	flag = 100;

    cout << "test4() " << endl;
    cout <<" sizeof(bool): "<< sizeof(bool) << endl;
	//bool类型 非0的值 转为 1  ，0就转为0
	cout << "flag ：" << flag << endl;
    cout << endl;
}

//6、三目运算符增强
void test5()
{
	int a = 10;
	int b = 20;

    cout << "test5() " << endl;
	cout << "ret = " << (a < b ? a : b) << endl;
	
	(a < b ? a : b) = 100; //b = 100 C++中返回的是变量
	 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
    cout << endl;
}

const int m_A = 10; //收到保护，不可以改

void test6()
{

	const int m_B = 20; //真正常量
	//m_B = 100;

	int * p = (int *)&m_B;
	*p = 200;
    
    cout << "test6() " << endl;
	cout << "*p = " << *p << endl;
	cout << "m_B = " << m_B << endl;

	int arr[m_B]; //可以初始化数组
    cout << endl;
}

int main()
{

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();

	system("pause");
	return EXIT_SUCCESS;
}

/*
test1()
test2()
test3()
p1.m_Age : 11

test4()
 sizeof(bool): 1
flag ：1

test5()
ret = 10
a = 100
b = 20

test6()
*p = 200
m_B = 20

*/