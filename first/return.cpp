/*
 * @Author: cpu_code
 * @Date: 2020-05-28 22:19:51
 * @LastEditTime: 2020-05-28 22:26:16
 * @FilePath: \ccourse\1_first\6_return.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int stonetolb(int);     // function prototype

int main()
{
    using namespace std;    //访问位于名称空间std中的cout定义

    int stone;
    int pounds;

    cout << "Enter the weight in stone: ";
    cin >> stone;

    pounds = stonetolb(stone);
    
    cout << " stone == " << stone << endl;
    cout <<" pounds == " << pounds <<  endl;

	// cin.get();
    // cin.get();

    return 0;
}

int stonetolb(int sts)  //返回值
{
     return 10 * sts;
}

/*
Enter the weight in stone: 22
 stone == 22
 pounds == 220
*/