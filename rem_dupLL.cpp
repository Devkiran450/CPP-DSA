#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> ump;
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
        ump[n];
    }
    else
    {
        node* ptr=new node();
        ptr->d=n;
        ptr->link=NULL;
        tail->link=ptr;
        tail=tail->link;
        ump[n];
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

void delete_node(int pos)
{
    node* temp=head;
    node* prev=NULL;
    while(pos!=1)
    {
        pos--;
        prev=temp;
        temp=temp->link;
    }
    prev=temp->link;
    free(temp);
}

void rem_dupLL()
{
    node* ptr=head;
    int pos=1;
    while(ptr!=NULL)
    {
        if(ump[ptr->d])
            delete_node(pos);
        else
        {
            ump[ptr->d]=1;
            ptr=ptr->link;
            pos++;
        }
    }
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
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        create(a[i]);
    }
    dispLL();

    rem_dupLL();

    cout<<"\nAfter Removing Duplicates\n";

    dispLL();

    return 0;
}