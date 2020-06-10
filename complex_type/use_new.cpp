/*
 * @Author: cpu_code
 * @Date: 2020-06-10 12:28:18
 * @LastEditTime: 2020-06-10 12:46:09
 * @FilePath: \ccourse\complex_type\use_new.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: new 获得并指定分配内存
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    int nights = 1001;
    int * pt = new int;         // allocate space for an int
    *pt = 1001;                 // store a value there

    cout << "nights value == " << nights << endl;
    cout  << "&nights == " << &nights << endl << endl;

    cout << "int" << endl;
    cout << "value of *pt == " << *pt << endl;
    cout << "pt == " << pt << endl << endl;

    double * pd = new double;   // allocate space for a double
    *pd = 10000001.0;           // store a double there

    cout << "double " << endl;
    cout << "value of *pd == " << *pd <<endl;
    cout << "pd == " << pd << endl;
    cout << "location of pointer &pd == " << &pd << endl << endl;

    cout << "size of pt == " << sizeof(pt) << endl;
    cout << "size of *pt == " << sizeof(*pt) << endl << endl;

    cout << "size of pd == " << sizeof pd << endl;
    cout << "size of *pd == " << sizeof(*pd) << endl;

    // cin.get();

    return 0;
}

/*
nights value == 1001
&nights == 008FFC34

int
value of *pt == 1001
pt == 00D07920

double
value of *pd == 1e+007
pd == 00D07C70
location of pointer &pd == 008FFC1C

size of pt == 4
size of *pt == 4

size of pd == 4
size of *pd == 8
*/