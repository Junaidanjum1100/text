#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    cout<<"Enter the name : ";
    getline(cin,name);
   int idx=0;
    while(name[idx]!='\0')
    {
       if(name[idx]!=' ')
       {
        count++;
       }
       idx++;
    }
    cout<<count<<endl;
}