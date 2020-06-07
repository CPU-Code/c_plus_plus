/*
 * @Author: cpu_code
 * @Date: 2020-06-07 20:58:25
 * @LastEditTime: 2020-06-07 21:02:04
 * @FilePath: \ccourse\3_complex_type\read_string.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 读取多个字符串的问题
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
    cin >> name;

    cout << "Enter your  dessert:\n";
    cin >> dessert;

    cout << "dessert ==  " << dessert << endl;
    cout << "name == " << name << endl;

    // cin.get();
	// cin.get();
    
    return 0; 
}

/*
Enter your name:
daafda fsafe
Enter your  dessert:
dessert ==  fsafe
name == daafda
*/