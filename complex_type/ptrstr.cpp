/*
 * @Author: cpu_code
 * @Date: 2020-06-10 15:56:11
 * @LastEditTime: 2020-06-10 17:07:52
 * @FilePath: \ccourse\complex_type\ptrstr.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <cstring>              // declare strlen(), strcpy()

/**
 * @function: 数组和指针的关系
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    char animal[20] = "bear";   // animal holds bear
    const char * bird = "wren"; // bird holds address of string
    char * ps;                  // uninitialized

    cout << "animal == "<< animal << endl;  // display bear
    cout << "bird == " << bird << "\n" << endl;       // display wren
    // cout << ps << "\n";      //may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal;              // ok if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn't
    //            point to allocated space

    ps = animal;                // set ps to point to string
    cout << "ps == " << ps << "\n" << endl;       // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << "animal == "<< animal << " at " << (int *) animal << endl;
    cout << "ps == "<< ps << " at " << (int *) ps << endl << endl;

    ps = new char[strlen(animal) + 1];  // get new storage
    strcpy(ps, animal);         // copy string to new storage
    cout << "After using strcpy():\n";
    cout << "animal == "<< animal << " at " << (int *) animal << endl;
    cout << "ps =="<< ps << " at " << (int *) ps << endl;
    delete [] ps;

    // cin.get();
    // cin.get();

    return 0; 
}

/*
animal == bear
bird == wren

Enter a kind of animal: nafdas
ps == nafdas

Before using strcpy():
animal == nafdas at 008FF7BC
ps == nafdas at 008FF7BC

After using strcpy():
animal == nafdas at 008FF7BC
ps ==nafdas at 00D136F8
*/