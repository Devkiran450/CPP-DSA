// Build Tree using given Inorder and Preorder sequences
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
int search(int *in,int s,int e,int curr)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
node* buildTree(int *pre,int *in,int s,int e)
{
    static int i=0;
    if(s>e)
    {
        return NULL;
    }
    int curr=pre[i];
    i++;
    int pos=search(in,s,e,curr);
    node* root=new node(curr);
    if(s==e)
    {
        return root;
    }
    root->l=buildTree(pre,in,s,pos-1);
    root->r=buildTree(pre,in,pos+1,e);
    return root;
}
void PrintInOrder(node *root)
{
     if(root==NULL)
     {
         return;
     }
     PrintInOrder(root->l);
     cout<<root->d<<" ";
     PrintInOrder(root->r);
}
int main()
{
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};
    node *root=buildTree(pre,in,0,4);
    PrintInOrder(root);
    return 0;
}