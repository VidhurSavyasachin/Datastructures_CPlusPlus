//
//  Parser.cpp
//  Brackets
//
//  Created by Vidhur Savyasachin on 5/16/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#include "Parser.hpp"
#include "Stack.hpp"
StackClass s;
Parser::Parser(){};
Parser::~Parser(){};
int Parser::isBracket(char ch){
    string value = "{}[]()<>";
    for (int i=0; i<value.length(); i++) {
        if(ch==value.at(i)){
            
            return value.find(ch);
            
        }
    }
   
    return -1;
    
}
bool Parser::isOpen(char ch){
    if(isBracket(ch)%2 == 0){
        return true;
    }
    
    return false;
}
bool Parser::isClose(char ch){
    if(isBracket(ch)%2 != 0){
        return true;
    }
    return false;
}
bool Parser::isMate(char co, char c1){
    int posC0 = isBracket(co);
    
    
    int posC1 = isBracket(c1);
    
    if(posC0+1 == posC1){
        //        cout<<"Match"<<endl;
        return true;
    }
    //    cout<<"No Match";
    return false;
}
void Parser::doParse(){
   char x;
    bool isOk = false;
ifstream myfile ("/Users/vidhursavyasachin/Library/Autosave Information/Brackets/Brackets/text1");
    
    while(myfile >> x){
        cout<<x;
        if(isBracket(x) < 0){
           
            continue;
        }
        if(isOpen(x)){
            
            s.push(x);
           
        }
        if(s.empty()){
            isOk = false;
            break;
        }
    if(!s.empty()){
        if(isClose(x)){
            char val = s.top();
           
            if(isMate(val,x )){
                s.pop();
               
                isOk = true;
                
                continue;
            }else if(!isMate(val, x)){
               
                isOk = false;
                
            }
            else  if(s.empty() && isClose(x)){
               
                break;
            }
            if(!s.empty()){
            
                break;
            }
//            if(s.empty() && isClose(x)){
//                            cout<<"Not balanced";
//            }
        
    }
        }
}
    if(isOk == true){
        cout<<endl;
        cout<< "The Line is Ok" << endl;
    }else{
        cout<< "This line is Not Ok"<<endl;
    }
}
