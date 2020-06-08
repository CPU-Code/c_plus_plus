/*
 * @Author: cpu_code
 * @Date: 2020-06-08 16:26:26
 * @LastEditTime: 2020-06-08 16:31:00
 * @FilePath: \ccourse\complex_type\strcat_cpy.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library

/**
 * @function: strcpy( )将字符串复制到字符数组中，
 *            strcat( )将字符串附加到字符数组末尾
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "panther";

    // assignment for string objects and character arrays
    str1 = str2;                // copy str2 to str1
    strcpy(charr1, charr2);     // copy charr2 to charr1
 
    // appending for string objects and character arrays
    str1 += " paste";           // add paste to end of str1
    strcat(charr1, " juice");   // add juice to end of charr1

    // finding the length of a string object and a C-style string
    int len1 = str1.size();     // obtain length of str1
    int len2 = strlen(charr1);  // obtain length of charr1
 
    cout << "str1 ==  " << str1 << " len1的长度 ==  " << len1 << endl;
    cout << "charr1 == " << charr1 << " len2的长度 ==  " << len2 << endl;

    // cin.get();

    return 0; 
}

/*
str1 ==  panther paste len1的长度 ==  13
charr1 == jaguar juice len2的长度 ==  12
*/