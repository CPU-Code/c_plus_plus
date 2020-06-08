/*
 * @Author: cpu_code
 * @Date: 2020-06-08 13:32:37
 * @LastEditTime: 2020-06-08 13:39:49
 * @FilePath: \ccourse\complex_type\string_add.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// strtype2.cpp ? assigning, adding, and appending
#include <iostream>
#include <string>               // make string class available

/**
 * @function: string 赋值，相加
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    string s1 = "penguin";
    string s2, s3;

    s2 = s1;
    cout << "s2 = s1 \n";\
    cout << "s1 == " << s1 << endl; 
    cout << "s2 == " << s2 << endl << endl;

    cout << "s2 = \"buzzard\" \n";
    s2 = "buzzard";
    cout << "s2 == " << s2 << endl << endl;

    cout << " s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3 == " << s3 << endl << endl;

    cout << "s1 += s2\n";
    s1 += s2;
    cout <<"s1 == " << s1 << endl << endl;

    cout << "s2 += \" for a day \" \n";
    s2 += " for a day";
    cout <<"s2 == " << s2 << endl;

    //cin.get();

    return 0; 
}

/*
s2 = s1
s1 == penguin
s2 == penguin

s2 = "buzzard"
s2 == buzzard

 s3 = s1 + s2
s3 == penguinbuzzard

s1 += s2
s1 == penguinbuzzard

s2 += " for a day "
s2 == buzzard for a day
*/