//
//  Heap.cpp
//  HeapSort
//
//  Created by Vidhur Savyasachin on 5/5/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Heap.h"

using namespace std;

Heap::Heap(int capacity){
    arraySize = new long[capacity];
    
}

bool Heap :: isFull(){
    return size == 2000;
}
bool Heap:: isEmpty(){
    return size == 0;
}
int Heap:: getChild(int index, bool left){
    return 2 * index + (left ? 1 : 2);
}
int Heap:: getParent(int index){
    return (index - 1)/2 ;
}
void Heap:: insert(long value){
    if(isFull()){

        throw std::out_of_range ("OUt");

    }
    arraySize[size] = value;
    fixHeapAbove(size);
    size++;
}
void Heap::fixHeapAbove(int index){
    long newValue = arraySize[index];
    while (index > 0 && newValue > arraySize[getParent(index)]) {
        arraySize[index] = arraySize[getParent(index)];
        index = getParent(index);
    }
    arraySize[index] = newValue;
}
void Heap::fixHeapBelow(int index, int lastHeapIndex){
    int childToSwap;
        while(index <= lastHeapIndex){
            int leftChild = getChild(index, true);
            int rightChild = getChild(index, false);
                if(leftChild <= lastHeapIndex){
                    if(rightChild > lastHeapIndex){
                        childToSwap = leftChild;
                    }else{
                        childToSwap = (arraySize[leftChild] > arraySize[rightChild]? leftChild : rightChild);
                    }
                    if(arraySize[index] < arraySize[childToSwap]){
                        long tmp = arraySize[index];
                        arraySize[index] = arraySize[childToSwap];
                        arraySize[childToSwap] = tmp;
                    }else{
                        break;
                    }
                    index = childToSwap;
                }else{
                    break;
                }
        }
}
void Heap::sort(){
    int lastHeapIndex = size - 1;
    for (int i=0; i < lastHeapIndex; i++) {
        long tmp = arraySize[0];
        arraySize[0] = arraySize[lastHeapIndex - i];
        arraySize[lastHeapIndex - i] = tmp;
        fixHeapBelow(0, lastHeapIndex - i - 1);

    }
}
void Heap::printHead(){
    for(int i = 0; i < size;i++){
        cout<<arraySize[i]<<endl;
    }
    cout<<endl;
}

