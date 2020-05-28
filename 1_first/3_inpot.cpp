/*
 * @Author: cpu_code
 * @Date: 2020-05-28 21:21:49
 * @LastEditTime: 2020-05-28 21:24:42
 * @FilePath: \ccourse\1_first\3_inpot.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>

int main()
{
    using namespace std;
    
    int num;
    
    cout << "输入信息 " << endl;
    cin >> num;                // C++ input

    cout << "num == " << num << endl;
    num = num + 2;

    cout << "num == " << num << " == num + 2 " << endl;

	// cin.get();
	// cin.get();

    return 0;
}

/*
输入信息
5
num == 5
num == 7 == num + 2 
*/