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
void doublestack(stack *s)
{
    s->capa*=2;
    int *temp=new int[s->capa];
    for(int i=0;i<=s->top;i++)
    {
        temp[i]=s->arr[i];
    }
    free(s->arr);
    s->arr=temp;
    cout<<"\nStack Doubled:)";
}
void halfstack(stack *s)
{
     int *temp;
     if(s->top==s->capa/2-1)
    {   
        s->capa/=2;
        temp=new int[s->capa];
        for(int i=0;i<=s->top;i++)
        {
            temp[i]=s->arr[i];
        }
        free(s->arr);
        s->arr=temp;
        cout<<"\nStack Halved:)";
     }
}
void push(stack *s)
{
    if(isfull(s))
    {
        doublestack(s);
    }
    int x;
    cout<<"\nEnter a value to push:";
    cin>>x;
    s->top++;
    s->arr[s->top]=x;
    cout<<"\nValue pushed!!";
}
void pop(stack *s)
{
    int val;
    if(isemp(s))
    {cout<<"\nStack Underflow!!";}
    else
    {
        
        val=s->arr[s->top];
        s->top--;
        cout<<"\nValue popped is:"<<val;
        halfstack(s);
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
            default:cout<<"\nInvalid Choice";
                    break;
        }
        if(flag==1)
        break;
    }
    return 0;
}
