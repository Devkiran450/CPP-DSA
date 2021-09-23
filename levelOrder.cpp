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
void levelOrder(node* root)
{
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
            cout<<n->d<<" ";
            if(n->l)
                q.push(n->l);
            if(n->r)
                q.push(n->r);
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
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
    levelOrder(root);
    return 0;
}