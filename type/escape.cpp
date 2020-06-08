/*
 * @Author: cpu_code
 * @Date: 2020-05-29 17:13:23
 * @LastEditTime: 2020-05-29 17:24:52
 * @FilePath: \ccourse\2_type\7_escape.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>

/*
C++转义序列的编码
字 符 名 称 ASCII符号    C++代码     十进制ASCII码   十六进制ASCII码 
换行符           NL(LF)     \n            10             0xA
水平制表符      HT          \t            9               0x9
垂直制表符       VT          \v           11               0xB
退格             BS         \b          8                  0x8
回车            CR          \r          13                 0xD
振铃           BEL           \a           7               0x7
反斜杠           \         \             92              0x5C
问号           ?           \?            63              0x3F
单引号         '            \ '         39              0x27
双引号        "             \ "         34               0x22
*/

int main()
{
    using namespace std;

    long code;

    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";

    cin >> code;
    cout << "\a You entered " << code << "...\n";
    cout << "\a Code verified! Proceed with Plan Z3!\n";

    // cin.get();
    // cin.get();

    return 0; 
}

/*
Operation "HyperHype" is now activated!
Enter your agent code:1555____
 You entered 1555...
 Code verified! Proceed with Plan Z3!
*/