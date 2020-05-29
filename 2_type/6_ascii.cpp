/*
 * @Author: cpu_code
 * @Date: 2020-05-29 16:57:58
 * @LastEditTime: 2020-05-29 17:02:01
 * @FilePath: \ccourse\2_type\6_ascii.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

int main()
{
    using namespace std;

    char ch = 'M';       // assign ASCII code for M to ch
    int i = ch;          // store same code in an int

    cout << "The ASCII code == " << ch << " == " << i << endl;

    ch = ch + 1;          // change character code in ch
    i = ch;               // save new character code in i

    cout << "The ASCII code == " << ch << " == " << i << endl;

    // using the cout.put() member function to display a char
    cout << " cout.put(ch) == ";
    cout.put(ch);

    // 显示字符的方法
    cout.put('!');
    
    cout << endl;

	// cin.get();

    return 0;
}

/*
The ASCII code == M == 77
The ASCII code == N == 78
 cout.put(ch) == N!
*/