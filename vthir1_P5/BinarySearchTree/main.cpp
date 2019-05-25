//
//  main.cpp
//  BinarySearchTree
//
//  Created by Vidhur Savyasachin on 4/23/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//


#include "Tree.h"
#include "Tool.h"
using namespace std;
int main(int argc, const char * argv[]) {
    Tree* tree = new Tree();
    string data,data_1;
    ifstream myfile("file.txt");
    map<string,int> wordCount;
 if(myfile.is_open())
   {
      while(myfile >> data){
           data_1 = (tree->trim(data));
           for (int i=0,len = data.size();i < data.length(); i++) {
                   if(ispunct(data_1[i])){
                       data_1.erase(i--,1);
                       len = data_1.size();
                   }
               }
           transform(data_1.begin(), data_1.end(), data_1.begin(), ::tolower);
         ++wordCount[data_1];
        }
         myfile.close();
    }
 else{
       cout<<"Unable to oepn";
   }
    
for(map<string,int>:: iterator it = wordCount.begin();it!=wordCount.end();++it){
       if(it->second > 4 && it->first.length() > 5){
           tree->insert(it->first);
        }
    
    }
    banner();
     tree->print5();
    cout<<endl;
    bye();
    return 0;
}
