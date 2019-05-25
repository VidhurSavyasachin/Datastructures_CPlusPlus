//
//  Stack.cpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/16/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#include "Stack.hpp"
StackClass::StackClass(){};
StackClass::~StackClass(){};
void StackClass::push(char ch){
    x.push(ch);
}
void StackClass::pop(){
    x.pop();
}
char StackClass::top(){
    return x.top();
}
bool StackClass::empty(){
    if(x.empty()){
        return true;
    }else{
        return false;
    }
}
void StackClass::clear(){
    x.empty();
}
