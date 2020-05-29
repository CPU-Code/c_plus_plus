/*
 * @Author: cpu_code
 * @Date: 2020-05-29 11:06:09
 * @LastEditTime: 2020-05-29 11:14:06
 * @FilePath: \ccourse\2_type\4_base.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 42; 
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!"  << endl;

    cout << "chest == " << chest << " (decimal for 42)" << endl;
    cout << hex;      // manipulator for changing number base

    cout << "waist == " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;      // manipulator for changing number base

    cout << "inseam == " << inseam << " (octal for 42)" << endl;
    
    // cin.get();

    return 0; 
}

/*
Monsieur cuts a striking figure!
chest == 42 (decimal for 42)
waist == 2a (hexadecimal for 42)
inseam == 52 (octal for 42)
*/