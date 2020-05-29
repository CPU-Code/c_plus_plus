/*
 * @Author: cpu_code
 * @Date: 2020-05-29 19:12:46
 * @LastEditTime: 2020-05-29 19:31:02
 * @FilePath: \ccourse\2_type\13_changes.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;     // int converted to float
    int debt = 7.2E12;  // result not defined in C++
    int guess = 3.9832; // float converted to int
    int double_t(3.9832);  // double converted to int

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    cout << "double_t = " << double_t << endl;

    // cin.get();

    return 0;
}

/*
tree = 3.000000
guess = 3
debt = 1634811904
double_t = 3
*/