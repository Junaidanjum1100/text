#include<iostream>
using namespace std;
string cheeckSpeed(float speed);
main()
{
    float speed;
    string result;
    while(true)
    {
       cout<<"Enter speed :";
       cin>>speed;
       result = cheeckSpeed(speed);
       cout<<result<<endl;
    }
}
string cheeckSpeed(float speed)
{
    string name;
    if(speed <= 10 )
    {
        name = "Slow";
    }
     else if(speed = 10 && speed <= 50 )
    {
        name = "average";
    }
     else if(speed < 50 && speed <= 150 )
    {
        name = "fast";
    }
     else if(speed < 150 && speed <= 1000 )
    {
        name = "ultra-fast";
    }
    else
    {
        name = "Exclusive fast";
    }
    return name;

    
}