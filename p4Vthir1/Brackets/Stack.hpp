//
//  Stack.hpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/16/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp
#include "Parser.hpp"
#include <iostream>
#include <stack>
using namespace std;
class StackClass{
   stack<char> x;
public:
     
    StackClass();
    ~StackClass();
    void print();
    void push(char ch);
    void pop();
    char top();
    bool empty();
    void clear();
};

#endif /* Stack_hpp */
