/*
 * @Author: cpu_code
 * @Date: 2020-06-30 13:20:56
 * @LastEditTime: 2020-06-30 13:22:08
 * @FilePath: \ccourse\introduction\KiKi_highest_score.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/*
题目描述
KiKi知道了大一三科比较重要课程的分数，包括：程序设计基础，高数，英语，请编程帮他找到三科中的最高分。
输入描述:
一行，三个整数，用空格分隔，代表三科成绩。
输出描述:
一行，一个整数，代表输入三科分数中的最高分数。
示例1
输入
复制
90 88 99
输出
复制
99
*/
#include <iostream>

using namespace std;

int main()
{
    int program = 0;
    int math = 0;
    int English = 0;
    
    cin >> program >> math >> English;
    if(program > math)
    {
        if(program > English)
        {
            cout << program << endl;
        }
        else
        {
            cout << English << endl;
        }
    }
    else
    {
        if(math > English)
        {
            cout << math << endl;
        }
        else
        {
            cout << English << endl;
        }
    }
    
    return 0;
}