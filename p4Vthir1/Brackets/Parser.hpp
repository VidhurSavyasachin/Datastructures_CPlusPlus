//
//  Parser.hpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/16/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#ifndef Parser_hpp
#define Parser_hpp

#include <iostream>
#include <stack>
#include <fstream>
#include "Stack.hpp"
using namespace std;
class Parser{
    
    
public:
    Parser();
    ~Parser();
    int isBracket(char ch);
    bool isOpen(char ch);
    bool isClose(char ch);
    bool isMate(char co,char c1);
    void doParse();
    
};

#endif /* Parser_hpp */
