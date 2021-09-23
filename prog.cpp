#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[10];int i,flag=0;
    const char *arr[]={"break","case","continue","default","defer","else","for","func","goto","if","map","return","struct","type","var"};
    gets(s);
    for(i=0;i<16;i++)
    {
        if(strcmp(arr[i],s)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<s<<" is not a keyword";
    }
    else
    {
        cout<<s<<"  is a keyword";
    }
    return 0;
}