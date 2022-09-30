#include<iostream>
#include"linkedlistqueue.h"
#include"Linkedlist.h"
using namespace std;
linkedlist_queue::linkedlist_queue()
{
 
    l.HEAD=NULL;
    l.TAIL=NULL;
}
int linkedlist_queue::enqueue(int data)
{
    
    if (isFull()){
        cout<<endl<<"Cannot enqueue "<<data<<". The queue is full.The back index element is ";
    }
    else{
        l.addToTail(data);
        numnodes++;
        cout<<endl<<"Enqueued element ";
    }
        
    return back();

}
int linkedlist_queue::dequeue(){
    int x;
    if(isEmpty()){
        cout<<"Cannot dequeue.The queue is empty. ";
    }
    else
    {
        x=l.removeFromHead();
        numnodes--;
        cout<<endl<<"Dequeued element ";
    }
    return x;
}
bool linkedlist_queue::isEmpty(){
    return l.isEmpty();
    
}
bool linkedlist_queue::isFull(){

    if(numnodes==totalNodes){
        return true;
    }
    else
    {
        return false;
    }

}
int linkedlist_queue::front(){
    return((l.HEAD->data));
}
int linkedlist_queue::back(){
    return((l.TAIL->data));
}
void linkedlist_queue::display(){
    cout<<endl;
    l.traverse();
}
