/*
 * @Author: cpu_code
 * @Date: 2020-05-29 10:34:15
 * @LastEditTime: 2020-05-29 10:45:47
 * @FilePath: \ccourse\2_type\2_exceed.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <climits>  // defines INT_MAX as largest int value

#define ZERO    0      // makes ZERO symbol for 0 value

int main()
{
    using namespace std;

    short short_t = SHRT_MAX;       // initialize a variable to max value
    unsigned short u_short_t = short_t;   // okay if variable u_short_t already defined

    cout << "short short_t == " << short_t << endl;
    cout <<" unsigned short u_short_t ==  " << u_short_t << endl;

    short_t = short_t + 1;
    u_short_t = u_short_t + 1; 
    cout << " short_t + 1 == " << short_t << endl;
    cout << " u_short_t + 1 ==  " << u_short_t << endl;

    cout << endl;

    short_t = ZERO;
    u_short_t = ZERO;
    cout << "short_t == ZERO == " << short_t << endl;
    cout << "u_short_t == ZERO == " << u_short_t << endl;

    short_t = short_t - 1;
    u_short_t = u_short_t - 1;
    cout << "short_t - 1 == " << short_t << endl;
    cout << " u_short_t - 1 ==  " << u_short_t << endl;

	// cin.get();
    
    return 0; 
}

/*
short short_t == 32767
 unsigned short u_short_t ==  32767
 short_t + 1 == -32768
 u_short_t + 1 ==  32768
 
short_t == ZERO == 0
u_short_t == ZERO == 0
short_t - 1 == -1
 u_short_t - 1 ==  65535
*/