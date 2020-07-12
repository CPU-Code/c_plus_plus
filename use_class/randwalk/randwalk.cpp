/*
 * @Author: cpu_code
 * @Date: 2020-06-19 12:17:04
 * @LastEditTime: 2020-06-20 20:40:23
 * @FilePath: \ccourse\use_class\randwalk\randwalk.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype

#include "vect.h"

int main()
{
    using namespace std;

    //声明使Vector类的名称
    using VECTOR::Vector;

    //随机数支持
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
        {
            break;
        }

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, POL);
            result = result + step;
            steps++;
        }

        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";

        cout << "result == " << result << endl;

        result.polar_mode();
        cout << " result == " << result << endl;
        cout << "result.magval()/steps == "
            << result.magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";

/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}

/*

*/