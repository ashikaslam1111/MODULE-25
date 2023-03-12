#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
class Queue
{
public:
    node* head;
    node* tail;
    int sz;
    Queue()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    node* creatNewnode(int value)
    {
        node* newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
    void enqueue(int value)
    {
        sz++;
        node* newnode=creatNewnode(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"empty";
            return;
        }
        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }
        node* a=head;
        head=head->next;
        delete a;
    }
    int front_()
    {
        if(sz==0)
        {
            cout<<"empty";
            return-1;
        }
        return head->data;
    }
    int size_()
    {
        return sz;
    }
};
int main()
{
    Queue l;
    l.enqueue(1);
    cout<<l.front_();
    return 0;
}
