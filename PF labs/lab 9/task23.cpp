#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a string  : ";
    getline(cin,name);
    cout<<"\"something ";
    int index=0;
    while(name[index != '\0'])
    {
        cout<<name[index];
        index++;
    }
    cout<<" \" " ;
}