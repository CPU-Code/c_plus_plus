/*
 * @Author: cpu_code
 * @Date: 2020-06-10 19:47:00
 * @LastEditTime: 2020-06-10 23:03:40
 * @FilePath: \ccourse\class\stock\stock.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef STOCK1_H_   //防止多重包含
#define STOCK1_H_

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() 
    {
        std::cout << "in set_tot() "<<"\n";
        total_val = shares * share_val; 
        std::cout << " total_val == shares * share_val =="<< total_val << "\n";
        std::cout << "exit set_tot() "<<"\n\n";
    }
public:
    Stock();        // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();       // noisy destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
