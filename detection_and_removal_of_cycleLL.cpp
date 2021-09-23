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
void makeCycle(int pos)
{
    node* temp=head;
    node* start;
    int c=1;
    while(temp->link!=NULL)
    {
        if(c==pos)
        {
            start=temp;
        }
        temp=temp->link;
        c++;
    }
    temp->link=start;
}
bool detectCycle()
{
    node* s=head;
    node* f=head;
    while(f!=NULL&&f->link!=NULL)
    {
        s=s->link;
        f=f->link->link;
        if(s==f)
        {
            return true;
        }
    }
    return false;
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
void removeCycle()
{
     node* s=head;
     node* f=head;
     do
     {
       s=s->link;
       f=f->link->link;
     } while (s->link!=f->link);
     f=head;
     while(f->link!=s->link)
     {
         f=f->link;
         s=s->link;
     }
     s->link=NULL;
     cout<<"Cycle Removed :)\n";
     dispLL();
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
    int pos;
    cout<<"Enter the position in which you want a cycle:";
    cin>>pos;
    makeCycle(pos);
    if(detectCycle())
    {
        cout<<"There exists a cycle";
        int n;
        cout<<"\nDo you wanna remove the cycle?---Y(1)/N(0)?";
        cin>>n;
        if(n)
        {
          removeCycle();
        }
    }
    else
    {
        cout<<"There does not exist a cycle";
    }
    return 0;
}