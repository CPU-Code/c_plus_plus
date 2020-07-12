/*
 * @Author: cpu_code
 * @Date: 2020-06-20 22:52:42
 * @LastEditTime: 2020-06-20 22:57:45
 * @FilePath: \ccourse\use_class\stonewt\stone.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include "stonewt.h"

using std::cout;

void display(const Stonewt & st, int n);

int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "incognito: ";
    incognito.show_stn();
    cout << "wolfe: ";
    wolfe.show_stn();
    cout << "taft: ";
    taft.show_lbs();

    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "incognito: ";
    incognito.show_stn();
    cout << "taft: ";
    taft.show_lbs();

    display(taft, 2);
    cout << "The wrestler weighed even more.\n";

    display(422, 2);
    cout << "No stone left unearned\n";

    // std::cin.get();

    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "in display to "<< n << ": ";
        st.show_stn();
    }
}