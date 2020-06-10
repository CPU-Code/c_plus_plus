/*
 * @Author: cpu_code
 * @Date: 2020-06-10 17:02:16
 * @LastEditTime: 2020-06-10 17:21:04
 * @FilePath: \ccourse\complex_type\newstrct.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

struct inflatable   // structure definition
{
    char name[20];
    float volume;
    double price;
};

/**
 * @function: new创建一个未命名的结构
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    inflatable * ps = new inflatable; // allot memory for structure

    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);            // method 1 for member access

    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;              // method 2 for member access

    cout << "Enter price: ";
    cin >> ps->price;
    cout << endl;

    cout << "(*ps).name == " << (*ps).name << endl;              // method 2
    cout << "ps->volume == " << ps->volume << endl; // method 1
    cout << "ps->price == " << ps->price << endl;             // method 1

    delete ps;                        // free memory used by structure

    // cin.get();
    // cin.get();

    return 0; 
}

/*
Enter name of inflatable item: das
Enter volume in cubic feet: 1232
Enter price: 5344

(*ps).name == das
ps->volume == 1232
ps->price == 5344
*/