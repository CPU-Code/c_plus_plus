/*
 * @Author: cpu_code
 * @Date: 2020-05-29 18:20:43
 * @LastEditTime: 2020-05-29 18:31:45
 * @FilePath: \ccourse\2_type\12_remainder.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */

//% 取余数

#include <iostream>

int main()
{
    using namespace std;

    const int Lbs_per_stn = 10;
    int lbs;

    cout << "俩位数: ";
    cin >> lbs;

    int stone = lbs / Lbs_per_stn;
    
    int pounds = lbs % Lbs_per_stn;

    cout << " 十位 == " << stone << endl;
    cout << " 尾数 == " << pounds << endl;

    // cin.get();
    // cin.get();

    return 0; 
}

/*
俩位数: 15
 十位 == 1
 尾数 == 5
*/