//
//  main.cpp
//  HeapSort
//
//  Created by Vidhur Savyasachin on 5/5/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//


#include "Heap.h"
#include "Tool.h"
using namespace std;
int main(int argc, const char * argv[]) {
    vector<long> vect;
    long data;
    int count = 0;
    ifstream myfile("numbers.txt");
    if(myfile.is_open())
    {
        
        while(myfile >> data){
            vect.push_back(data);
            count+=1;
         }
        myfile.close();
    }
    else
    {
        cout<<"Unable to open";
    }
    Heap* heap = new Heap(count);
    for(int i = 0; i<count;i++){
       heap->insert(vect.at(i));
    }
    heap->sort();
    banner();
    heap->printHead();
     bye();
    return 0;
}

 
 
 
