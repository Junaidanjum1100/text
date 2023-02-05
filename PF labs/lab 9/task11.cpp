#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    bool isfound=0;
    char letter;
    cout<<"Enter the name : ";
    getline(cin,name);
    count=name.length();
   cout<<"Enter the letter : ";
   cin>>letter;
   int idx=0;
   while(name[idx] !='\0')
   {
     if(name[idx]==letter)
     {
        isfound=true;
        break;
     }
     idx++;
   }
   if(isfound==true)
   {
    cout<<"letter Present "<<endl;
   }
   else
   {
    cout<<" Not present "<<endl;
   }
   
    
   
}