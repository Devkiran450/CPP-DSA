#include<iostream>
#include<stack>
using namespace std;
void InAtBot(stack<int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    InAtBot(st,ele);
    st.push(topele);
}
void reverse(stack<int> &st)
{
    if(st.empty())
    {
       return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    InAtBot(st,ele);
}
int main()
{
    stack<int> st;
    st.push(1);st.push(2);st.push(3);st.push(4);st.push(5);
    reverse(st);
    cout<<"The elements of the stack are:";
    for(int i=0;i<=st.top();i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}