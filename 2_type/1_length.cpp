/*
 * @Author: cpu_code
 * @Date: 2020-05-28 22:34:48
 * @LastEditTime: 2020-05-28 22:40:38
 * @FilePath: \ccourse\2_type\1_length.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/*
CHAR_BIT        char的位数
CHAR_MAX        char的最大值
CHAR_MIN        char的最小值
SCHAR_MAX       signed char的最大值
SCHAR_MIN       signed char的最小值
UCHAR_MAX       unsigned char的最大值
SHRT_MAX        short的最大值
SHRT_MIN        short的最小值
USHRT_MAX       unsigned short的最大值
INT_MAX         int的最大值
INT_MIN         int的最小值
UNIT_MAX        unsigned int的最大值
LONG_MAX        long的最大值
LONG_MIN        long的最小值符号常量—预处理器方式
ULONG_MAX       unsigned long的最大值
LLONG_MAX       long long的最大值
LLONG_MIN       long long的最小值
ULLONG_MAX      unsigned long long的最大值
*/

#include <iostream>
#include <climits>              // use limits.h for older systems，定义了表示各种限制的符号名称

int main()
{
    using namespace std;

    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int == " << sizeof (int) << " bytes." << endl;
    cout << "short == " << sizeof n_short << " bytes." << endl;
    cout << "long == " << sizeof n_long << " bytes." << endl;
    cout << "long long == " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    
	// cin.get();

    return 0;
}

/*
int == 4 bytes.
short == 2 bytes.
long == 4 bytes.
long long == 8 bytes.

Maximum values:
int: 2147483647
short: 32767
long: 2147483647
long long: 9223372036854775807

Minimum int value = -2147483648
Bits per byte = 8
*/