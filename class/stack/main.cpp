/*
 * @Author: cpu_code
 * @Date: 2020-06-18 21:54:20
 * @LastEditTime: 2020-06-18 22:25:12
 * @FilePath: \ccourse\class\stack\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"

int main()
{
    using namespace std;

    Stack st; // create an empty stack
    char ch;
    unsigned long po;

    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }

        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch(ch)
        {
            case 'A':
            case 'a': 
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull())
                {
                    cout << "stack already full\n";
                }
                else
                {
                    st.push(po);
                }
                break;

            case 'P':
            case 'p': 
                if (st.isempty())
                {
                    cout << "stack already empty\n";
                }
                else
                {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;

        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0; 
}

/*
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
a
Enter a PO number to add: 66
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
p
PO #66 popped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
p
stack already empty
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
q
Bye
*/