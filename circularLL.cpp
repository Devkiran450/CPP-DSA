#include<iostream>
using namespace std;
struct node
{
    int d;
    node* link;
};
node* head=NULL;node* tail=NULL;
void create(int n)
{
    if(head==NULL)
    {
        node* ptr=new node();
        ptr->d=n;
        head=ptr;
        ptr->link=head;
        tail=ptr;
    }
    else
    {
        node* ptr=new node();
        ptr->d=n;
        ptr->link=head;
        tail->link=ptr;
        tail=tail->link;
    }
}
int length()
{
    node* temp=head;
    int c=1;
    do
    {
      temp=temp->link;
      c++;
    } while (temp->link!=head);
    return c;
}
void disp()
{
    if(head==NULL)
    {
      cout<<"No element";
    }
    else
    {
        node* temp=head;
        do
        {
             cout<<temp->d<<"->";
             temp=temp->link;
        }while(temp!=head);
    }
}
void addEnd(int n)
{
    node* temp=head;
    node* prev=NULL;
    node* ptr=new node();
    ptr->d=n;
    ptr->link=head;
    do
    {
        prev=temp;
        temp=temp->link;
    }while(temp!=head);
    prev->link=ptr;
}
void addBegin(int n)
{
    node* ptr=new node();
    ptr->d=n;
    ptr->link=head;
    node* temp=head;
    do
    {
      temp=temp->link;
    } while (temp->link!=head);
    temp->link=ptr;
    head=ptr;
}
int main()
{
    int n,i,p;
    cout<<"\nEnter number of values to store in the Linked List:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>>p;
        create(p);
    }
    addEnd(4);
    addBegin(0);
    disp();
    cout<<"\nThe length of the circular linked list is "<<length();
    return 0;
}