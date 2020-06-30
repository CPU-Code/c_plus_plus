/*
 * @Author: cpu_code
 * @Date: 2020-06-30 12:53:09
 * @LastEditTime: 2020-06-30 12:53:58
 * @FilePath: \ccourse\introduction\KIKI_calendar_class.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/*
题目描述
KiKi学习了面向对象技术，学会了通过封装属性（变量）和行为（函数）定义类，现在他要设计一个电子日历类TDate。
它有3个私有数据成员：Month,Day,Year和若干个公有成员函数，要求：
（1）带有默认形参值的构造函数，默认值为0, 0, 0；
（2）输出日期函数，用“日/月/年”格式输出日期；
（3）设置日期函数，从键盘输入年、月、日。
输入描述:
一行，三个整数，用空格分隔，分别表示年、月、日。
输出描述:
一行，用“日/月/年”格式输出日期。
示例1
输入
复制
2019 12 30
输出
复制
30/12/2019
*/
#include <iostream>

using namespace std;

class TDate
{
public:
    TDate():Year(0),Month(0),Day(0){}
    TDate(int a, int b, int c):Year(a),Month(b),Day(c){}
    void input_data();
    void print_data();
    
private:
    int Year;
    int Month;
    int Day;
};
void TDate::input_data()
{
    cin >> Year >> Month >> Day;
}

void TDate::print_data()
{
    cout << Day << "/" << Month << "/" << Year << endl;
}

int main()
{
    TDate test;
    
    test.input_data();
    test.print_data();
    
    return 0;
}