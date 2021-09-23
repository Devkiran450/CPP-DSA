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
void preOrder(node* root)
{
     if(root==NULL)
     {
         return;
     }
     cout<<root->d<<" ";
     preOrder(root->l);
     preOrder(root->r);
}
void inOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->l);
    cout<<root->d<<" ";
    inOrder(root->r);
}
void postOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->l);
    postOrder(root->r);
    cout<<root->d<<" ";
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
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}