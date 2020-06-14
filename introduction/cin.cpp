/*
 * @Author: cpu_code
 * @Date: 2020-06-14 18:03:43
 * @LastEditTime: 2020-06-14 18:04:09
 * @FilePath: \ccourse\introduction\cin.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/**
题目描述
输入3科成绩，然后把三科成绩输出，成绩为整数形式。
输入描述:
一行，3科成绩，用空格分隔，范围（0~100）。
输出描述:
一行，把3科成绩显示出来，输出格式详见输出样例。
示例1
输入
60 80 90
输出
score1=60,score2=80,score3=90
 */
#include <iostream>

using namespace std;

int main()
{
    int score1;
    int score2;
    int score3;

    cin >> score1 >> score2 >> score3;
    cout << "score1=" << score1 << ",";
    cout << "score2=" << score2 << ",";
    cout << "score3=" << score3 ;
    
    return 0;
}