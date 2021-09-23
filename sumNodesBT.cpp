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
int sumNode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return sumNode(root->l)+sumNode(root->r)+(root->d);
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
    int s=sumNode(root);
    cout<<"The nsum of nodes is "<<s;
    return 0;
}