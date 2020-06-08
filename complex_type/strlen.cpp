/*
 * @Author: cpu_code
 * @Date: 2020-06-07 20:47:53
 * @LastEditTime: 2020-06-07 20:54:38
 * @FilePath: \ccourse\3_complex_type\string.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <cstring>  // for the strlen() function

/**
 * @function: 静态数组，strlen计算长度
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;
    
    const int Size = 15;

    char name1[Size];               // empty array
    char name2[Size] = "C++owboy";  // initialized array

    // NOTE: some implementations may require the static keyword
    // to initialize the array name2

    cout << "name2 == " << name2;
    cout << "输入name1：\n";
    cin >> name1;

    cout << "name1 == " << name1 << endl;
    cout << "name1的长度 == " << strlen(name1) << endl;

    cout << "name1 == " << sizeof(name1) << " bytes.\n";
    cout << "name1[0] == " << name1[0] << endl;
    name2[3] = '\0';                // set to null character

    cout << "name2 == ";
    cout << name2 << endl;

    // cin.get();
    // cin.get();
    
    return 0;
}

/*
name2 == C++owboy
输入name1：
dsdgdf
name1 == dsdgdf
name1的长度 == 6
name1 == 15 bytes.
name1[0] == d
name2 == C++
*/