/*
 * @Author: cpu_code
 * @Date: 2020-06-01 21:20:38
 * @LastEditTime: 2020-06-01 22:14:47
 * @FilePath: \ccourse\1_first\name_use.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

namespace LOL
{
	void goAtk();
}

namespace KingGlory
{
	void goAtk();
}

void LOL::goAtk()
{
	cout << "LOL攻击实现" << endl;
}

void KingGlory::goAtk()
{
	cout << "王者农药攻击实现" << endl;
}

//namespace命名空间主要用途 用来解决命名冲突的问题
void test01()
{
	cout << "test01()" <<endl;
	LOL::goAtk();
	KingGlory::goAtk();
}

//1、命名空间下 可以放函数、变量、结构体、类
namespace A
{
	void func();
	int m_A = 20;
    
	struct Person
	{
	};
	class Animal{};

	namespace B
	{
		int m_A = 10;
	}
}
//2、命名空间必须定义在全局作用域下
//3、命名空间可以嵌套命名空间

void test02()
{
	cout << "test02()" <<endl;
	cout << "作用域B下的m_A为： " << A::B::m_A << endl;
}

//4、命名空间是开放的，可以随时往原先的命名空间添加内容
namespace A  //此A命名空间会和上面的命名空间A进行合并
{
	int m_B = 1000;
}

void test03()
{
	cout << "test03()" <<endl;
	cout << "A::下的m_A为" << A::m_A << " m_B为： " << A::m_B << endl;
}

//5、无名、匿名命名空间
namespace
{
	int m_C = 2;
	int m_D = 5;
}
//当写了无名命名空间，相当于写了 static int m_C ; static int m_D;
//只能在当前文件内使用

//6、命名空间可以起别名
namespace veryLongName
{
	int m_A = 6;
}

void test04()
{
	//起别名
	namespace veryShortName = veryLongName;

	cout << "test04()" <<endl;
	cout << "veryLongName::m_A :"<< veryLongName::m_A << endl;
	cout << "veryShortName::m_A :" << veryShortName::m_A << endl;
}

int main()
{
	test01();
	cout <<endl;

	test02();
	cout <<endl;

	test03();
	cout <<endl;
	
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

/*
test01()
LOL攻击实现
王者农药攻击实现

test02()
作用域B下的m_A为： 10

test03()
A::下的m_A为20 m_B为： 1000

test04()
veryLongName::m_A :6
veryShortName::m_A :6
*/