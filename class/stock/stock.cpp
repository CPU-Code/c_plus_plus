/*
 * @Author: cpu_code
 * @Date: 2020-06-10 19:48:50
 * @LastEditTime: 2020-06-10 23:03:16
 * @FilePath: \ccourse\class\stock\stock.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */

// stock1.cpp ?Stock class implementation with constructors, destructor added
#include <iostream>
#include "stock.h"

// constructors (verbose versions)
Stock::Stock()        // default constructor
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "in Stock " << "\n";
    std::cout << "co == " << co << "\n";
    company = co;

    if (n < 0)
    {
        shares = 0;

        std::cout << "in n < 0"  << std::endl;
        std::cout << "company == " << company << std::endl;
        std::cout << "n == " << n << "\n";
        std::cout << "shares == "<< shares <<"\n";
    }
    else
    {
        shares = n;

        std::cout << "in n >= 0"  << std::endl;
        std::cout << "shares == "<< shares <<"\n";
    }
       
    share_val = pr;

    std::cout << "share_val == "<< share_val <<"\n";

    set_tot();

    std::cout << "share_val == "<< share_val <<"\n";
    std::cout << "exit Stock " << "\n\n";
}
// class destructor
Stock::~Stock()        // verbose class destructor
{
    std::cout << "~Stock()" << company << "\n";
}

// other methods
void Stock::buy(long num, double price)
{
     if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    cout << "in show()"<< endl;
    // set format to #.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = cout.precision(3);

    cout << "Company == " << company << endl;
    cout << "Shares == " << shares << '\n';
    cout << "share_val == " << share_val << endl;
    // set format to #.##
    cout.precision(2);
    cout << "total_val == " << total_val << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
    cout << "exit show()"<< endl << endl;
}
