/*
 * @Author: cpu_code
 * @Date: 2020-05-29 11:46:33
 * @LastEditTime: 2020-05-29 11:53:15
 * @FilePath: \ccourse\2_type\5_chartype.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main( )
{
    using namespace std;
    char ch;        // declare a char variable

    cout << "Enter a character: " << endl;
    cin >> ch;

    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    
    // cin.get();
    // cin.get();

    return 0;
}

/*
Enter a character:
A
Hola! Thank you for the A character.
*/