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
    cout<<"NULL";
}

int main()
{
    int a[10],n,t,mul=1,num;
    cout<<"Enter test-cases:";
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        num=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            num=(num*10)+a[i];
            create(a[i]);
        }
        dispLL();
        head=NULL;
        cout<<endl;
        mul*=num;
    }
    cout<<endl<<mul;
    return 0;
}