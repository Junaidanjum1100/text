#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a string  : ";
    getline(cin,name);
    
    int idx=0;
    while(name[idx] != '\0')
    {
        if(name[idx] != 'a'|| name[idx] != 'e'|| name[idx] != 'i'|| name[idx] != 'o'|| name[idx]!='u'|| name[idx]!='A'|| name[idx]!='E'|| name[idx]!='I'| name[idx]!='O'|| name[idx]!='U')
        {
        cout<<name[idx];
        }
        idx++;
    }
   
}