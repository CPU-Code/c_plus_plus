/*
 * @Author: cpu_code
 * @Date: 2020-06-08 17:36:43
 * @LastEditTime: 2020-06-08 19:58:57
 * @FilePath: \ccourse\complex_type\assgn_st.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

/**
 * @function: 将结构体赋给另一个同类型的结构体
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
int main()
{
    using namespace std;

    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    cout << "bouquet.name == " << bouquet.name << endl;
    cout << "bouquet.price == " << bouquet.price << endl;

    choice = bouquet;  // assign one structure to another
    cout << "choice.name == " << choice.name << endl;
    cout << "choice.name == " << choice.price << endl;

    // cin.get();

    return 0; 
}

/*
bouquet.name == sunflowers
bouquet.price == 12.49
choice.name == sunflowers
choice.name == 12.49
*/