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
int calcD(node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ld=calcD(root->l,&lh);
    int rd=calcD(root->r,&rh);
    int currDia=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currDia,max(ld,rd));
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
    int height=0;
    int d=calcD(root,&height);
    cout<<"The diameter of the binary tree is "<<d;
    return 0;
}