/*
 * @Author: cpu_code
 * @Date: 2020-06-10 11:15:17
 * @LastEditTime: 2020-06-10 11:21:20
 * @FilePath: \ccourse\complex_type\arrstruct.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

/**
 * @function: 使用它和句点运算符来访问相应inflatable结构的成员
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    inflatable guests[2] =          // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},      // first structure in array
        {"Godzilla", 2000, 565.99}  // next structure in array
    };

    cout << "guests[0].name ==  " << guests[0].name << endl;
    cout << "guests[1].name == " << guests[1].name << endl;
    cout << "guests[0].volume + guests[1].volume == " 
         << guests[0].volume + guests[1].volume <<endl;

    // cin.get();

    return 0; 
}

/*
guests[0].name ==  Bambi
guests[1].name == Godzilla
guests[0].volume + guests[1].volume == 2000.5
*/