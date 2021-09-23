#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    //insert #1
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    //insert #2
    ourmap["def"]=2;
    
    //find or access values through keys #1
    cout<<ourmap["abc"]<<endl;
    //find or access values through keys #2
    cout<<ourmap.at("def")<<endl;

    //to access non existent key #1
    //cout<<ourmap.at("ghi")<<endl;
    //to check presence
    if(ourmap.count("ghi")>0)
    {
        cout<<"Key found"<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }

    //to access non existent key #2
    cout<<ourmap["ghi"]<<endl;
    //to check presence
    if(ourmap.count("ghi")>0)
    {
        cout<<"Key found"<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }
    return 0;
}