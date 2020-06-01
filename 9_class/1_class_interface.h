/*
 * @Author: cpu_code
 * @Date: 2020-06-01 17:07:44
 * @LastEditTime: 2020-06-01 17:13:57
 * @FilePath: \ccourse\9_class\1_class_interface.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef CLASS_INTERFACE_H_
#define CLASS_INTERFACE_H_

#include <string>  

class Stock  // 类
{
private:        /* 私有 */
    std::string company;    /* 使用作用域解析运算符（::） 来标识函数所属的类 */

    long shares;        /* 类数据 */
    double share_val;
    double total_val;

    void set_tot()      /* 类函数 */
    {
        total_val = shares * share_val; 
    }

public:     /* 公共 */
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // note semicolon at the end

#endif