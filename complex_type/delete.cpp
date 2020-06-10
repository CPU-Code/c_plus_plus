/*
 * @Author: cpu_code
 * @Date: 2020-06-10 17:25:34
 * @LastEditTime: 2020-06-10 17:29:47
 * @FilePath: \ccourse\complex_type\delete.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <cstring>      // or string.h

using namespace std;

char * getname(void);   // function prototype

/**
 * @function: 释放内存以便能够重新使用
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    char * name;        // create pointer but no storage

    name = getname();   // assign address of string to name
    cout << "name == "<< name << " at " << (int *) name << "\n\n";
    delete [] name;     // memory freed

    name = getname();   // reuse freed memory
    cout << "name == " << name << " at " << (int *) name << "\n";
    delete [] name;     // memory freed again

    // cin.get();
    // cin.get();
    
    return 0;
}

char * getname()        // return pointer to new string
{
    char temp[80];      // temporary storage
    cout << "in getname()" << endl;
    cout << "Enter last name: ";
    cin >> temp;

    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // copy string into smaller space
    cout << "exit getname()" << endl;
    return pn;          // temp lost when function ends
}

/*
in getname()
Enter last name: fdsa
exit getname()
name == fdsa at 013D2DF8

in getname()
Enter last name: vda
exit getname()
name == vda at 013D7650
*/