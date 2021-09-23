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
        cout<<temp->d<<"->";
        temp=temp->link;
    }cout<<"NULL";
}
void appK_nodes_at_end(int k,int n)
{
   node* newTail=head;
   node* newHead=head;
   int c=1;
   while(c<n-k)
   {
       newTail=newTail->link;
       newHead=newHead->link;
       c++;
   }
   newHead=newHead->link;
   newTail->link=NULL;
   tail->link=head;
   head=newHead;
}
int main()
{
    int a[10],n=0;
    cout<<"Elements of LL:";
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        create(a[i]);
        n++;
    }
    dispLL();
    int k;
    cout<<"\nEnter the value of k:";
    cin>>k;
    appK_nodes_at_end(k,n);
    cout<<"\nAfter appending:\n";
    dispLL();
    return 0;
}