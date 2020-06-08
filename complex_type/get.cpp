/*
 * @Author: cpu_code
 * @Date: 2020-06-07 21:08:54
 * @LastEditTime: 2020-06-07 21:10:05
 * @FilePath: \ccourse\3_complex_type\get.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 使用get（）读取多个单词
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;
    const int ArSize = 20;
	
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();    // read string, newline
	
    cout << "Enter your  dessert:\n";
    cin.get(dessert, ArSize).get();
	
    cout << "dessert == " << dessert << endl;
    cout << "name == " << name << ".\n";
	
    // cin.get();
	
    return 0; 
}

/*
Enter your name:
fa fdan
Enter your  dessert:
nvda cabwe
dessert ==  nvda cabwe
 name == fa fdan.
*/