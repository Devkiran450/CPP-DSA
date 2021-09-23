#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    if(c=='+'||c=='-')
    {
        return 1;
    }
    if(c=='*'|c=='/')
    {
        return 2;
    }
    return -1;
}
string inf_to_pre(string s)
{
    stack<char> st;
    string res;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            while(!st.empty()&&st.top()!=')')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
             res+=s[i];
        }
        else if(s[i]==')')
        {
            st.push(')');
        }
        else
        {
            while(!st.empty()&&prec(st.top())>prec(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    string s="(a-b/c)*(a/k-l)";
    cout<<"The prefix for the given postfix is "<<inf_to_pre(s);
    return 0;
}