#include<iostream>
#include <windows.h>
#include <stdlib.h>
#include "circarr.h"
#include "linkedlistqueue.h"
using namespace std;



int main()
{   queue *queptr;
    queue * arrque=new circarr;
    queue * linkedlistqueue=new linkedlist_queue;
    int optn;
    cout<<"Which implementation you want to see?"<<endl;
    cout<<"1)ARRAY  \n2)LINKEDLIST"<<endl;
    cin>>optn;
    if(optn==1){
        queptr=arrque;
    }
    else{
        queptr=linkedlistqueue;
    }
    Sleep(3000);
    system("cls");
    int x;
 
    cout<<"\nChecking if the queue is empty "<<queptr->isEmpty()<<endl;
    
    cout<<"\nChecking if the queue is full "<<queptr->isFull()<<endl;
    Sleep(5000);
    system("cls");

    cout<<"\nTrying to dequeue in the first sequence..."<<endl;
    cout<<queptr->dequeue();
    Sleep(2000);

    cout<<queptr->enqueue(11);
    queptr->display();
    Sleep(2000);

    cout<<queptr->enqueue(120);
    queptr->display();
    Sleep(2000);
    cout<<queptr->enqueue(315);
    queptr->display();
    Sleep(2000);

    cout<<queptr->enqueue(60);
    queptr->display();
    Sleep(2000);

    cout<<queptr->enqueue(234);
    queptr->display();
    Sleep(2000);

    cout<<queptr->enqueue(543);
    queptr->display();
    Sleep(2000);

    cout<<endl<<"\nChecking whether the queue is full or not... "<<queptr->isFull()<<endl;
    Sleep(2000);
    cout<<queptr->enqueue(30);
    queptr->display();
    Sleep(2000);

    cout<<queptr->dequeue();
    queptr->display();
    Sleep(2000);

    cout<<queptr->dequeue();
    queptr->display();
    Sleep(3000);


    cout<<endl<<"The element at front index is "<<queptr->front()<<"."<<endl;
    cout<<"The element at back index is "<<queptr->back();
    Sleep(2000);
}