#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> rd(int *a,int size)
{
    vector<int> op;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++)
    {
        if(seen.count(a[i])>0)
        {
            continue;
        }
        seen[a[i]]=true;
        op.push_back(a[i]);
    }
    return op;
}
int main()
{
    int a[]={1,2,4,1,3,7,6,3,5,6,2};
    vector<int> op=rd(a,11);
    for(int i=0;i<op.size();i++)
    {
        cout<<op[i]<<" ";
    }
    return 0;
}