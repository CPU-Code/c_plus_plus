/*
 * @Author: cpu_code
 * @Date: 2020-06-19 11:16:53
 * @LastEditTime: 2020-06-19 11:19:23
 * @FilePath: \ccourse\use_class\friend\mytime.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef MYTIME_H_
#define MYTIME_H_

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);

    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);

    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;

    friend Time operator*(double m, const Time & t)
    { 
        return t * m; 
    }   // inline definition

    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif