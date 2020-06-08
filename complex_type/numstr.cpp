/*
 * @Author: cpu_code
 * @Date: 2020-06-07 21:16:49
 * @LastEditTime: 2020-06-07 21:18:19
 * @FilePath: \ccourse\3_complex_type\numstr.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 号输入 和 行输入
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;
    int year;
	
    cout << "输入year:\n";
    cin >> year;
	
    // cin.get();
	
    char address[80];
    cin.getline(address, 80);
	
    cout << "year == " << year << endl;
    cout << "address ==  " << address << endl;
	
    // cin.get();
	
    return 0; 
}

/*
输入year:
451
year == 451
address ==
*/