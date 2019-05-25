//
//  Heap.h
//  HeapSort
//
//  Created by Vidhur Savyasachin on 5/5/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#ifndef Heap_h
#define Heap_h
#include<iostream>
using namespace std;
class Heap {
private:
    int size;
    long* arraySize;
    
public:
    Heap(int capacity);
    bool isFull();
    bool isEmpty();
    int getChild(int index, bool left);
    void printHead();
    int getParent(int index);
    void insert(long index);
    void fixHeapBelow(int index,int lastHeapIndex);
    void fixHeapAbove(int index);
    void sort();
};

#endif /* Heap_h */
