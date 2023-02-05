#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    cout<<"Enter the name : ";
    getline(cin,name);
    count=name.length();
   if(count%2==0)
   {
    cout<<"Even length"<<endl;
   }
   else
   {
    cout<<"Odd lenght "<<endl;
   }
   
    
   
}