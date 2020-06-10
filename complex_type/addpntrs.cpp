/*
 * @Author: cpu_code
 * @Date: 2020-06-10 14:09:34
 * @LastEditTime: 2020-06-10 15:38:02
 * @FilePath: \ccourse\complex_type\addpntrs.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 将数组名解释为地址
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    // Here are two ways to get the address of an array
    double * pw = wages;     // name of an array = address
    short * ps = &stacks[0]; // or use address operator
    // with array element
    cout << "pw == " << pw << endl;
    cout << "*pw == " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw == " << pw <<endl;
    cout << "*pw == " << *pw << "\n\n";

    cout << "ps == " << ps << endl;
    cout << "*ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps == " << ps << endl;
    cout << "*ps == " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] == " << stacks[0] << endl;
    cout << "stacks[1] == " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks == " << *stacks << endl;
    cout << "*(stacks + 1) ==  " << *(stacks + 1) << endl;

    cout << "size of wages array == " << sizeof(wages) << endl;
    cout << "size of pw pointer == " << sizeof(pw) << endl;

    // cin.get();

    return 0; 
}

/*
pw == 012FFA10
*pw == 10000
add 1 to the pw pointer:
pw == 012FFA18
*pw == 20000

ps == 012FFA00
*ps = 3
add 1 to the ps pointer:
ps == 012FFA02
*ps == 2

access two elements with array notation
stacks[0] == 3
stacks[1] == 2
access two elements with pointer notation
*stacks == 3
*(stacks + 1) ==  2
size of wages array == 24
size of pw pointer == 4
*/