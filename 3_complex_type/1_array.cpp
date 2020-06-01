/*
 * @Author: cpu_code
 * @Date: 2020-05-29 20:29:12
 * @LastEditTime: 2020-05-29 20:43:56
 * @FilePath: \ccourse\3_complex_type\1_array.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
//数组

#include <iostream>

int main()
{
    using namespace std;

    int yams[3];    // creates array with three elements

    yams[0] = 7;    // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array
// NOTE: If your C++ compiler or translator can't initialize
// this array, use static int yamcosts[3] instead of
// int yamcosts[3]

    cout << " yams == ";
    cout << yams[0] << yams[1] << yams[2] << endl;

    cout << "yams[1] == " << yams[1] << endl;

    cout << " yamcosts == ";
    cout << yamcosts[0] << yamcosts[1] << yamcosts[2] << endl;

    cout << " yamcosts[1] == " << yamcosts[2] << endl;

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";

    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    // cin.get();

    return 0; 
}

/*
 yams == 786
yams[1] == 8
 yamcosts == 20305
 yamcosts[1] == 5

Size of yams array = 12 bytes.
Size of one element = 4 bytes.
*/