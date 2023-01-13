#include<iostream>
using namespace std;
string checkTitle(float age, char ch);
main()
{
    float age;
    char ch;
    string result;
    while(true)
    {
        cout<<"Enter you age : ";
        cin>>age;
        cout<<"Enter your gender f or m : ";
        cin>>ch;
        result = checkTitle(age, ch);
        cout<<result<<endl<<endl;
    }
}
string checkTitle(float age, char ch)
{
    string name;
    if( age >= 16 )
    {
        if(ch == 'm')
        {
            name = "Mr.";
        }
        else
        {
            name = "Ms.";
        }
    }
    if(age < 16)
    {
        if(ch == 'm')
        {
            name = "Master.";
        }
        else
        {
            name = "Miss";
        }
        return name;
    }
}
