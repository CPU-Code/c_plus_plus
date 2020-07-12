/*
 * @Author: cpu_code
 * @Date: 2020-06-20 22:49:22
 * @LastEditTime: 2020-06-20 22:51:51
 * @FilePath: \ccourse\use_class\stonewt\stonewt.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>
#include "stonewt.h"

using std::cout;

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
    
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << "stone == " << stone << " pounds == " << pds_left << "\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << "pounds == " << pounds << " \n";
}