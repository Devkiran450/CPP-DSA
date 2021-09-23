#include <iostream>
#include<queue>
using namespace std;
class Stack
{
    int n;
    queue<int> q1,q2;
    
    public:
           Stack()
           {
               n=0;
           }
           void push(int x)
           {
               q2.push(x);
               n++;
               queue<int> temp;
               while(!q1.empty())
               {
                   q2.push(q1.front());
                   q1.pop();
               }
               temp=q1;
               q1=q2;
               q2=temp;
           }
           void pop()
           {
               n--;
               q1.pop();
           }
           int top()
           {
               return q1.front();
           }
           int size()
           {
               return n;
           }            
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout<<s.size();
    return 0;
}