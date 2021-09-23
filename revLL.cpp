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
void revLL()
{
    node* prev;node* curr;node* next;
    prev=NULL;
    curr=head;
    while(curr!=NULL)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void dispLL()
{
    node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->d<<"->";
        ptr=ptr->link;
    }
    cout<<"NULL";
}
int main()
{
    int a[10];
    cout<<"Enter LL values:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        create(a[i]);
    }
    dispLL();
    cout<<endl;
    revLL();
    dispLL();
    return 0;
}