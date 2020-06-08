/*
 * @Author: cpu_code
 * @Date: 2020-05-28 21:42:12
 * @LastEditTime: 2020-05-28 21:48:55
 * @FilePath: \ccourse\1_first\4_sqrt.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>
#include <cmath>    // or math.h

int main()
{
    using namespace std;
   
    double area;    //双精度
    double side;

    cout << "输入数字: ";
    
    cin >> area;

    side = sqrt(area);  //平方根

    cout << "side == " << side 
         << " == sqrt("<< area << ")" 
         << endl;

	// cin.get();
	// cin.get();

    return 0;
}

/*
输入数字: 34
side == 5.83095 == sqrt(34)
*/