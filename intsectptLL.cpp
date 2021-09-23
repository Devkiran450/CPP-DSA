#include<iostream>
using namespace std;
struct node
{
    int d;
    node* link;
};
node* head=NULL;
node* tail=NULL;
void create(node* head,int n)
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
int length(node* head)
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
void intersect(node* h1,node* h2,int n)
{
    node* temp=h1;
    n--;
    while(n--)
    {
        temp=temp->link;
    }
    node* temp2=h2;
    while(temp2->link!=NULL)
    {
        temp2=temp2->link;
    }
    temp2->link=temp;
}
int intspt(node* h1,node* h2)
{
    node *ptr1,*ptr2;
    int flag=0;
    int l1=length(h1);
    int l2=length(h2);
    if(l1>l2)
    {
        int p=l1-l2,c=0;
        ptr2=h2;
        ptr1=h1;
        while(c<p)
        {
            ptr1=ptr1->link;
            c++;
        }
    }
    else
    {
        int p=l1-l2,c=0;
        ptr1=h1;
        ptr2=h2;
        while(c<p)
        {
            ptr2=ptr2->link;
            c++;
        }
    }
    while(ptr1->link!=NULL)
    {
         ptr1=ptr1->link;
         ptr2=ptr2->link;
         if(ptr1==ptr2)
         {
             flag=1;
             break;
         }
    }
    if(flag)
    {return ptr1->d;}
    else
    {
        return -1;
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
int main()
{
    int a[10];
    node* head1,*head2;   
    cout<<"/nElements of LL 1:";
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        create(head1,a[i]);
    }
    cout<<"/nElements of LL 2:";
    for(int i=0;i<2;i++)
    {
        cin>>a[i];
        create(head2,a[i]);
    }
    
    intersect(head1,head2,5);
    int p=intspt(head1,head2);
    if(p==-1)
    {cout<<"/nThere is no intersection point b/w 2 LLs.";}
    else
    {
        cout<<"Intersection point found at value "<<p;
    }
    
    return 0;
}