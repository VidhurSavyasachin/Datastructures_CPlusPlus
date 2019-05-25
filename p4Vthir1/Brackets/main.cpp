//
//  main.cpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/16/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//
// (<>)
#include "Parser.hpp"
#include "Tool.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    banner();
    Parser p;
    p.doParse();
    bye();
    return 0;
}
