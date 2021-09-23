#include<bits/stdc++.h>
using namespace std;
struct node
{
    int d;
    node* l;
    node* r;
    node(int val)
    {
        d=val;
        l=NULL;
        r=NULL;
    }
};
void levelOrder(node* root,int k)
{
    int sum=0,level=0;
    if(root==NULL)
    {return;}
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(level==k)
            {sum+=n->d;}
            if(n->l)
                q.push(n->l);
            if(n->r)
                q.push(n->r);
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
            
        }
    }
    cout<<sum;
}
int main()
{
    node* root=new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->l->l=new node(4);
    root->l->r=new node(5);
    root->r->l=new node(6);
    root->r->r=new node(7);
    int k;
    cout<<"Enter the value of Kth Level:";
    cin>>k;
    levelOrder(root,k);
    return 0;
}