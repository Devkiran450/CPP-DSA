#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main()
{
    vector<int> v,ans;
    deque<int> dq;
    int n,k,p;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter the window size:";
    cin>>k;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    for(int i=0;i<k;i++)
    {
        while(!dq.empty()&&dq.back()<v[i])
        {
            dq.pop_back();
        }
        dq.push_back(v[i]);
    }
    ans.push_back(dq.front());
    for(int i=0;i<n;i++)
    {
        if(dq.front()==v[i-k])
        {
           dq.pop_front();
        }
        while(!dq.empty()&&dq.back()<v[i])
        {
            dq.pop_back();
        }
        dq.push_back(v[i]);
        ans.push_back(dq.front());
    }
    for(auto it:ans)
    {
        cout<<" "<<it;
    }
    return 0;
}