#include<iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    char letter;
    cout<<"Enter the name : ";
    getline(cin,name);
  
   int idx=0;
   while(name[idx] !='\0')
   {
    if(name[idx]=='a'|| name[idx]=='e'|| name[idx]=='i'|| name[idx]=='o'|| name[idx]=='u'|| name[idx]=='A'|| name[idx]=='E'|| name[idx]=='I'| name[idx]=='E'|| name[idx]=='I'||name[idx]=='O'|| name[idx]=='U')
    {
        count++;
    }
    idx++;
   }
   cout<<count;
}
    
   
