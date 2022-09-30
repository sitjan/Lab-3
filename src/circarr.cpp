#include<iostream>
#include"circarr.h"
using namespace std;

circarr::circarr(){
    frontindex=-1;
    backindex=-1;
}

int circarr::enqueue(int data)
{
    
    if(isFull()){
        cout<<"\nCannot enqueue "<<data<<".The queue is full !! ";
        cout<<"\nThe element at back is ";
    }
   
    else{ 
        backindex=(backindex+1)%max;
        arr[backindex]=data;
        cout<<endl<<"Enqueued the element in the index "<<backindex<<":";        
    }
    
    if(backindex==0){
        frontindex=(frontindex+1)%max;
    }
    return arr[backindex];
}
int circarr::dequeue()
{
    if(isEmpty())
    {
        cout<<"\nCannot dequeue.The queue is empty.";
        return 0;
    }
    else{
        cout<<endl<<"\nDequeued element is ";
        int x=arr[frontindex];
        frontindex=(frontindex+1)%max;
        return x;
    }
    
}
bool circarr::isEmpty()
{   
    if (frontindex == backindex){
           cout<<"\nThe queue is empty"<<endl;
            return true;
    }
    else {
        cout<<"\nThe queue is not empty"<<endl;
            return false;
    }
}

bool circarr::isFull()
{
    if(((backindex+1)%max)==frontindex){
       cout<<"\nThe queue is full."<<endl;
        return true;
    } 
    else
    {
        cout<<"\nThe queue is not full."<<endl;
        return false;
    }
}

int circarr::front()
{   
    return arr[frontindex];
}
int circarr::back()
{
    return arr[backindex];
}
void circarr::display()
{
    int x=frontindex;
    cout<<endl;
    for(int i=x;i<backindex;i=(i+1)%max){
    
        
        cout<<" ["<<arr[i]<<"] ";
    }
    cout<<" ["<<arr[backindex]<<"] ";
    cout<<endl;
}