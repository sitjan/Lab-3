#ifndef linkedlistqueue_h
#define linkedlistqueue_h
#include "queue.h"
#include"LinkedList.h"
#include <iostream>


class linkedlist_queue:public queue{
    public: 
        
        Linkedlist l;
        int totalNodes=5;
        int numnodes=0;
        linkedlist_queue();
        int enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
        void display();

};

#endif