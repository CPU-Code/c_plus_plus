/*
 * @Author: cpu_code
 * @Date: 2020-06-11 09:44:28
 * @LastEditTime: 2020-06-11 18:33:50
 * @FilePath: \ccourse\class\ob_array\stock.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() 
    { 
        total_val = shares * share_val; 
    }
public:
    Stock();        // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();       // do-nothing destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;
};

#endif
