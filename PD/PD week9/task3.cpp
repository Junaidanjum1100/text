#include<iostream>
using namespace std;
main()
{
    string name;
    int length;
    cout<<"Enter the string :  ";
    getline(cin,name);
    length=name.length();
    if(length % 2 == 0)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

}