//
//  Tool.cpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/17/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#include "Tool.hpp"
using namespace std;
void fbanner()
{
    
    cout << "\n--------------------------------------------------------\n"
    << "\t" << NAME
    << "\n\t" << CLASS << "\n\t" << "\t"  << endl
    << "----------------------------------------------------------\n";
}

void banner() { fbanner() ; }

void bye() { cout << "\nNormal termination.\n" ; }

