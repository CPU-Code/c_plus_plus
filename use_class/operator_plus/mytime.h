/*
 * @Author: cpu_code
 * @Date: 2020-06-19 10:25:45
 * @LastEditTime: 2020-06-19 10:26:34
 * @FilePath: \ccourse\use_class\operator\mytime.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef MYTIME_H_
#define MYTIME_H_

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
    void Show() const;
};
#endif
