#include<iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
     int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
}
int part(int arr[],int l,int r)
{
    int pi=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[],int l,int r)
{
    if(l<r)
   { 
       int pi=part(arr,l,r);
       quickSort(arr,l,pi-1);
       quickSort(arr,pi+1,r);
   }
}
int main()
{
    int arr[]={6,3,1,4,2,9,7};
    quickSort(arr,0,6);
    cout<<"The Quick-sorted Array is:";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }  
    return 0;
}