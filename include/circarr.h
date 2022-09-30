#ifndef circarr_h
#define circarr_h
#include "queue.h"
#include <iostream>

class circarr:public queue{
    public:
        int frontindex,backindex,max=5;
        int *arr=new int[max];

        circarr();
        
        int enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
        void display();
        
    


};




#endif