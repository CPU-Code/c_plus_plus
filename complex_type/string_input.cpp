/*
 * @Author: cpu_code
 * @Date: 2020-06-08 16:48:16
 * @LastEditTime: 2020-06-08 16:51:22
 * @FilePath: \ccourse\complex_type\string_input.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library


/**
 * @function: 数组和string的长度问题
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    char charr[20]; 
    string str;

    cout << "Length of string in charr before input: " 
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
		 
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // indicate maximum length
    cout << "charr ==  " << charr << endl;
	
    cout << "Enter another line of text:\n";
    getline(cin, str);          // cin now an argument; no length specifier
    cout << "str ==  " << str << endl;
	
    cout << "charr的长度 ==  " << strlen(charr) << endl;
    cout << "str的长度 " << str.size() << endl;

    // cin.get();

    return 0; 
}

/*
Length of string in charr before input: 31
Length of string in str before input: 0
Enter a line of text:
fandf
charr ==  fandf
Enter another line of text:
nnvda
str ==  nnvda
charr的长度 ==  5
str的长度 5
*/