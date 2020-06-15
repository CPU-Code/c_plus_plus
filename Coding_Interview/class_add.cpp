/*
 * @Author: cpu_code
 * @Date: 2020-06-15 11:45:20
 * @LastEditTime: 2020-06-15 12:18:30
 * @FilePath: \ccourse\Coding_Interview\class_add.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/**
题目描述
请编写一个函数，将两个数字相加。不得使用+或其他算数运算符。

给定两个int A和B。请返回A＋B的值

测试样例：
1,2
返回：3
 */

#include <iostream>
#include <bitset>

using namespace std;

class UnusualAdd 
{
public:
    int addAB(int A, int B) 
	{
        // write code here
		cout << "A = " << bitset<8>(A) << " = " << A << endl;
		cout << "B = " << bitset<8>(B) << " = " << B  << endl;

        if(B == 0)
		{
			cout << "A = "<< A << endl;
            return A;
		}

		//位的异或运算与 求'和'的结果一致
        int sum = A^B;

		//位的与运算跟求'进位‘的结果一致
        int carry = (A & B) << 1;

		cout << "sum =   " << bitset<8>(sum) << " = " << sum  << endl;
		cout << "carry = " << bitset<8>(carry) << " = " << carry << endl << endl;

        return addAB(sum, carry);
    }
};

int main()
{
	UnusualAdd test;

	cout << "sum_num = " << test.addAB(10, 6) << endl;

    return 0; 
}

