/*
 * @Author: cpu_code
 * @Date: 2020-06-10 18:08:58
 * @LastEditTime: 2020-06-10 19:11:44
 * @FilePath: \ccourse\complex_type\maxtypes.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

struct antarctica_years_end
{
    int year;
 /* some really interesting data, etc. */
};

/**
 * @function: 数组 结构 指针
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    antarctica_years_end s01, s02, s03;

    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;

    antarctica_years_end trio[3]; // array of 3 structures

    trio[0].year = 2003;
    std::cout << "trio->year == "<< trio->year << std::endl;

    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << "arp[1]->year == " << arp[1]->year << std::endl;

    const antarctica_years_end ** ppa = arp; 
    auto ppb = arp; // C++0x automatic type deduction
// or else use const antarctica_years_end ** ppb = arp; 

    std::cout << "(*ppa)->year == " << (*ppa)->year << std::endl;
    std::cout << "(*(ppb + 1))->year == " << (*(ppb + 1))->year << std::endl;

    // std::cin.get();

    return 0;
}

/*
trio->year == 2003
arp[1]->year == 1999
(*ppa)->year == 1998
(*(ppb + 1))->year == 1999
*/