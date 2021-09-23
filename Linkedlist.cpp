#include<iostream>
using namespace std;
struct node
{
    int d;
    node* link;
};
node* head=NULL;
node* tail=NULL;
void create(int n)
{
    if(head==NULL)
    {
        node* ptr=new node();
        ptr->d=n;
        ptr->link=NULL;
        head=ptr;
        tail=ptr;
    }
    else
    {
        node* ptr=new node();
        ptr->d=n;
        ptr->link=NULL;
        tail->link=ptr;
        tail=tail->link;
    }
}
void dispLL()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<" ";
        temp=temp->link;
    }
}
void addBegin(int n)
{
    node* ptr=new node();
    ptr->d=n;
    ptr->link=head;
    head=ptr;
}
void addEnd(int n)
{
    node* ptr=new node();
    ptr->d=n;
    ptr->link=NULL;
    node* temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr;
}
void addMid(int pos,int n)
{
    node* ptr=new node();
    ptr->d=n;
    node* temp=head;
    node* prev=NULL;
    while(pos!=1)
    {
        pos--;
        prev=temp;
        temp=temp->link;
    }
    ptr->link=temp;
    prev->link=ptr;
}
int length()
{
    int c=0;
    node* temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->link;
    }
    return c;
}
int main()
{
    int a[10];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        create(a[i]);
    }
    addBegin(12);
    addMid(5,67);
    addEnd(19);
    cout<<"The length of the created linked list is "<<length()<<endl;
    dispLL();
    return 0;
}