#include<iostream>
using namespace std;
struct node
{
    int d;
    node* link;
};
void create(node* head,node* tail,int n)
{
     if(head==NULL)
     {
         node* ptr=new node();
         ptr->d=n;
         ptr->link;
         head=ptr;
         tail=ptr;
     }
     else
     {
         node* ptr=new node();
         ptr->d=n;
         ptr->link=NULL;
         tail->link=ptr;
         tail=ptr;
     }
}
node* mergeLL(node* h1,node* h2)
{
    node *p1=h1,*p2=h2,*dummy=new node();dummy->d=-1;
    node *p3=dummy;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->d<p2->d)
        {
            p3->link=p1;
            p1=p1->link;
        }
        else
        {
            p3->link=p2;
            p2=p2->link;
        }
        p3=p3->link;
    }
    while(p1!=NULL)
    {
        p3->link=p1;
        p1=p1->link;
        p3=p3->link;
    }
    while(p2!=NULL)
    {
        p3->link=p2;
        p2=p2->link;
        p3=p3->link;
    }
    return dummy->link;
}
void dispLL(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<"->";
        temp=temp->link;
    }cout<<"NULL";
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int a[10],n;
    cout<<"\nThe size of LL:";
    cin>>n;
    cout<<"\nElements of LL:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        create(head,tail,a[i]);
    }
    node* head2=NULL;
    node* tail2=NULL;
    cout<<"\nThe size of LL:";
    cin>>n;
    cout<<"\nElements of LL:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        create(head2,tail2,a[i]);
    }
    dispLL(mergeLL(head,head2));
    return 0;   
}