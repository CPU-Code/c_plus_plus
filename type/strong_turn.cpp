/*
 * @Author: cpu_code
 * @Date: 2020-05-29 19:15:41
 * @LastEditTime: 2020-05-29 19:20:06
 * @FilePath: \ccourse\2_type\14_strong_turn.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std;

    int auks, bats, coots;

    // the following statement adds the values as double,
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99;   // old C syntax
    coots = int (19.99) + int (11.99);  // new C++ syntax

    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    char ch = 'Z';

    cout << "char ch ==  " << ch << " == ";    // print as char
    cout << int(ch);                    // print as int

    cout << " == ";
    cout << static_cast<int>(ch) << endl;       // using static_cast

   // cin.get();
   
    return 0; 
}

/*
auks = 31
bats = 30
coots = 30
char ch ==  Z == 90 == 90
*/