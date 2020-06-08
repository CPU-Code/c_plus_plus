/*
 * @Author: cpu_code
 * @Date: 2020-06-07 21:04:42
 * @LastEditTime: 2020-06-07 21:05:37
 * @FilePath: \ccourse\3_complex_type\getline.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 使用getline读取多个单词
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
    cin.getline(name, ArSize);  // reads through newline

    cout << "Enter your  dessert:\n";
    cin.getline(dessert, ArSize);

    cout << "dessert ==  " << dessert << endl;
    cout << " name == " << name << ".\n";

    // cin.get();

    return 0; 
}

/*
Enter your name:
fads fdsa
Enter your  dessert:
ndk dsa
dessert ==  ndk dsa
 name == fads fdsa.
*/