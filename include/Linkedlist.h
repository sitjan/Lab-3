#ifndef Linkedlist_h
#define Linkedlist_h
#include <iostream>
class Node 
{
    public:
        int data;
        Node * next;
       
        Node(int info=0,Node *next=NULL);
};
class Linkedlist
{
    public:
        Node * HEAD;
        Node * TAIL;

        
        Linkedlist();

        bool isEmpty();
        void addToTail(int info);
        int removeFromHead();
        void traverse ();

};

#endif