//
//  List.h
//  P3LinkedList
//
//  Created by Vidhur Savyasachin on 3/25/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#ifndef List_h
#define List_h
#include <iostream>
#include<fstream>
using namespace std;
class List{
private:
    class Cell
    {
    public:
        Cell* next;
        string data;
        
    };
public:
    int length;
   Cell* head;
     Cell* scan = NULL;
   List();
   ~List();
    void getData();
    void insert(string data);
    void print();
    void insertion();
    void find();
    
    
};

#endif /* List_h */
