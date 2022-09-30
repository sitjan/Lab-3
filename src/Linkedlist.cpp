#include "Linkedlist.h"
#include <iostream>
using namespace std;

Node::Node(int info,Node *next)
{ 
    this->data=info;
    this->next=NULL;
}
Linkedlist::Linkedlist()
{
    this->HEAD=NULL;
    this->TAIL=NULL;
   
} 

bool Linkedlist::isEmpty()
{
    if(HEAD==NULL){
       cout<<"\nThe queue is empty"<<endl;
       return true;
    }
    else{
        cout<<"\nThe queue is not empty"<<endl;
        return false;
    }
 
} 

void Linkedlist:: addToTail(int info)
{
    Node *newNode=new Node;
    newNode->data=info;
    newNode->next=NULL;
    if(TAIL!=NULL){
        TAIL->next=newNode;
        TAIL=newNode;
    }
    else{
        HEAD=newNode;
        TAIL=newNode;
    }
}

int Linkedlist::removeFromHead()
{
    Node *nodetodelete=new Node;
    nodetodelete=HEAD;
    int x=nodetodelete->data;
    HEAD=nodetodelete->next;
    delete nodetodelete;
    return x;
}

void Linkedlist:: traverse ()
{
    for(Node *x=HEAD;x!=NULL;x=x->next)
    {   
        
        cout<<"["<<x->data<<"]";
        if(x->next!=NULL)
        {
            cout<<"  next  ";
        }
    }

}
