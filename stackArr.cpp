#include<iostream>
using namespace std;
struct stack
{
    int top;
    int capa;
    int *arr;
};
stack* create(int c)
{
    stack *s=new stack();
    s->top=-1;
    s->capa=c;
    s->arr=new int[s->capa];
    return s;
}
int isfull(stack *s)
{
    if(s->top==(s->capa-1))
    {
        return 1;
    }
    else
    return 0;
}
int isemp(stack *s)
{
    if(s->top==-1)
    return 1;
    else
    return 0;
}
void push(stack *s)
{
    if(isfull(s))
    {
        cout<<"\ncannot push stack full";
    }
    else
    {
        int x;
        cout<<"Enter a value to push:";
        cin>>x;
        s->top++;
        s->arr[s->top]=x;
        cout<<"\nValue pushed!!";
    }
}
void pop(stack *s)
{
    int val;
    if(isemp(s))
    cout<<"Stack underflow!";
    else
    {
        val=s->arr[s->top];
        s->top--;
        cout<<"Value popped is:"<<val;
    }
}
void show(stack *s)
{
     cout<<"\nThe stack elements are:";
     for(int i=0;i<=s->top;i++)
     {
         cout<<s->arr[i]<<",";
     }
}
int menu()
{
    int choice;
    cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit\n\nEnter your choice:";
    cin>>choice;
    return choice;
}
int main()
{
    int cap;
    cout<<"Enter the capacity of the stack:";
    cin>>cap;
    stack *s=create(cap);
    int flag=0;
    while(1)
    {
        switch(menu())
        {
            case 1: push(s);
                    break;
            case 2: pop(s);
                    break;
            case 3: show(s);
                    break;
            case 4: flag=1;
                    break;
            default:cout<<"Invalid Choice";
                    break;
        }
        if(flag==1)
        break;
    }
    return 0;
}
