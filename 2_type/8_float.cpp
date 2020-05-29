/*
 * @Author: cpu_code
 * @Date: 2020-05-29 17:55:23
 * @LastEditTime: 2020-05-29 18:02:31
 * @FilePath: \ccourse\2_type\8_float.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std; 

    //调用迫使输出使用定点表示法
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

    float tub = 10.0 / 3.0;     // good to about 6 places
    double mint = 10.0 / 3.0;   // good to about 15 places
    const float million = 1.0e6;

    cout << "tub == " << tub << endl;
    cout << "a million tubs = " << million * tub;

    cout << "\n ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint == " << mint << endl;
    cout << "a million mints == ";
    cout << million * mint << endl;

    // cin.get();

    return 0;
}

/*
tub == 3.333333
a million tubs = 3333333.250000
 ten million tubs = 33333332.000000
mint == 3.333333
a million mints == 3333333.333333
*/