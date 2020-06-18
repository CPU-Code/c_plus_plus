/*
 * @Author: cpu_code
 * @Date: 2020-06-18 21:54:03
 * @LastEditTime: 2020-06-18 21:59:57
 * @FilePath: \ccourse\class\stack\stack.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{

private:
    enum {MAX = 10};    // constant specific to class
    Item items[MAX];    // holds stack items
    int top;            // index for top stack item

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item

};

#endif