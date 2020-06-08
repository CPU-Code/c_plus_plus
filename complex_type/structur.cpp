/*
 * @Author: cpu_code
 * @Date: 2020-06-08 17:11:31
 * @LastEditTime: 2020-06-08 17:31:38
 * @FilePath: \ccourse\complex_type\structur.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

struct inflatable   // structure declaration
{
    char name[20];
    float volume;
    double price;
};

/**
 * @function: 结构体
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };  // guest is a structure variable of type inflatable

// It's initialized to the indicated values
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal is a second variable of type inflatable

// NOTE: some implementations require using
// static inflatable guest =

    cout << "guest.name ==  " << guest.name << endl;
    cout << "pal.name == " << pal.name << "\n";
// pal.name is the name member of the pal variable
    cout << "guest.price + pal.price == ";
    cout << guest.price + pal.price << "\n";

    // cin.get();

    return 0; 
}

/*
guest.name ==  Glorious Gloria
pal.name == Audacious Arthur
guest.price + pal.price == 62.98
*/