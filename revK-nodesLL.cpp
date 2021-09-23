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
node* revK(node* head,int k)
{
    node* prev;node* curr;node* next;
    prev=NULL;
    curr=head;
    int c=0;
    while(curr!=NULL&&c<k)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
        c++;
    }
    if(next!=NULL)
    {head->link=revK(next,k);}

    return prev;
}
void dispLL(node* head)
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
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        create(a[i]);
    }
    int k;
    cout<<"Enter the value of K:";
    cin>>k;
    dispLL(head);
    cout<<endl;
    node* ptr=head;
    node* newhead=revK(head,k);
    dispLL(newhead);
    return 0;
}