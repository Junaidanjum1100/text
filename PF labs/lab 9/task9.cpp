#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    cout<<"Enter the name : ";
    getline(cin,name);
    count=name.length();
   
    for(int idx=count; idx>=0;idx--)
    {
        cout<<name[idx];
    }
   
}