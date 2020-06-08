/*
 * @Author: cpu_code
 * @Date: 2020-05-29 18:10:10
 * @LastEditTime: 2020-05-29 18:11:47
 * @FilePath: \ccourse\2_type\10_arith.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

//算术
#include <iostream>

int main()
{
    using namespace std;

    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

    cout << "Enter a number: ";
    cin >> hats;

    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << endl;
    cout << " heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    // cin.get();
    // cin.get();

    return 0;
}

/*
Enter a number: 12.2
Enter another number: 6.12
hats = 12.200000
 heads = 6.120000
hats + heads = 18.320000
hats - heads = 6.080000
hats * heads = 74.663994
hats / heads = 1.993464
*/