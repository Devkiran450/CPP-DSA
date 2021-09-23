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
int calcD(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=calcH(root->l);
    int rh=calcH(root->r);
    int currdia=lh+rh+1;
    int ld=calcD(root->l);
    int rd=calcD(root->r);
    return max(currdia,max(ld,rd));
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
    int d=calcD(root);
    cout<<"The diameter of the binary tree is "<<d;
    return 0;
}