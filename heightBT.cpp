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
int calcH(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(calcH(root->l),calcH(root->r))+1;
}
int main()
{
    node* root=new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->r->l=new node(4);
    root->l->l=new node(5);
    root->r->l->r=new node(6);
    root->l->l->l=new node(7);
    root->l->l->l->l=new node(8);
    int h=calcH(root);
    cout<<"The height of the binary tree is "<<h;
    return 0;
}