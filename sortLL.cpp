#include<bits/stdc++.h>
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
    }
    cout<<"NULL\n";
}

void sorting()
{
    int count[3]={0,0,0};
    node* ptr=head;
    while(ptr!=NULL)
    {
        count[ptr->d]++;
        ptr=ptr->link;
    }
    int i=0;
    ptr=head;
    while(ptr!=NULL)
    {
        if(count[i]==0)
            i++;
        else
        {
            ptr->d=i;
            count[i]--;
            ptr=ptr->link;
        }
    }
}

int main()
{
    int a[10];
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
        create(a[i]);
    }

    dispLL();

    sorting();

    dispLL();
    
    return 0;
}