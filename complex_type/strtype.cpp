/*
 * @Author: cpu_code
 * @Date: 2020-06-07 21:22:47
 * @LastEditTime: 2020-06-08 10:30:59
 * @FilePath: \ccourse\3_complex_type\strtype.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>
#include <string>               // make string class available

/**
 * @function: 使用string类
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    
    string str1;                // create an empty string object
    string str2 = "panther";    // create an initialized string

    cout << "Enter charr1: ";
    cin >> charr1;
    cout << "Enter str1: ";
    cin >> str1;                // use cin for input
    
    cout << "charr1 == " << charr1 << endl;
    cout << "charr2 == " << charr2 << endl;
    cout << "str1 == " << str1 << endl;
    cout << "str2 == " << str2 << endl;
    cout << "charr2[2] ==  " << charr2[2] << endl;
    cout << "str2[2] == " << str2[2] << endl;   

	// cin.get();

    return 0; 
}

/*
Enter charr1: nds
Enter str1: nvdj
charr1 == nds
charr2 == jaguar
str1 == nvdj
str2 == panther
charr2[2] ==  g
str2[2] == n
*/