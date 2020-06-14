/*
 * @Author: cpu_code
 * @Date: 2020-06-14 19:54:18
 * @LastEditTime: 2020-06-14 19:57:02
 * @FilePath: \ccourse\introduction\cin_cout.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
题目描述
依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩。
输入描述:
学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
输出描述:
学号，3科成绩，输出格式详见输出样例。
示例1
输入
复制
17140216;80.845,90.55,100.00
输出
复制
The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.
 */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int student_num = 0;
    char ch = 0;
    float C = 0.f;
    float math = 0.f;
    float English = 0.f;
    
    cin >> student_num >> ch;
    cin >> C >> ch; 
    cin >> math >> ch;
    cin >> English ;

    cout << "The each subject score of  No. " << student_num;
    //fixed是一种非常方便的取小数的函数
    //setprecision()函数与setw()函数类似，也属于域宽。不过如果不够的话并不加空格或填充。
    //特别强调的是如果域宽范围内最后几位为0又恰好是小数，那么并不显示。
    cout << fixed << setprecision(2);
    cout << " is "<< C << ", "<< math << ", " << English << ".";
    
    return 0;
}
