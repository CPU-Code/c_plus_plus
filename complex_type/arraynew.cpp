/*
 * @Author: cpu_code
 * @Date: 2020-06-10 13:45:52
 * @LastEditTime: 2020-06-10 14:05:21
 * @FilePath: \ccourse\complex_type\arraynew.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

/**
 * @function: 使用new来创建动态数组, 使用数组表示法来访问元素
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    double * p3 = new double [3]; // space for 3 doubles

    p3[0] = 0.2;                  // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    
    cout << "p3[0] == " << p3[0] << "\n";
    cout << "p3[1] == " << p3[1] << "\n";
    cout << "p3[2] == " << p3[2] << "\n";

    p3 = p3 + 1;                  // increment the pointer
    cout << "Now p3[0] == " << p3[0] << endl;
    cout << "Now p3[1] == " << p3[1] << "\n";
    p3 = p3 - 1;                  // point back to beginning

    delete [] p3;                 // free the memory

    // cin.get();

    return 0; 
}

/*
p3[0] == 0.2
p3[1] == 0.5
p3[2] == 0.8
Now p3[0] == 0.5
Now p3[1] == 0.8
*/
