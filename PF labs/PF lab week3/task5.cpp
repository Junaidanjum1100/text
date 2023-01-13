#include<iostream>
using namespace std;
main()
{
float charge, current;
int time;
cout<<"Enter the value of charge ";
cin>> charge;
cout<<"Enter the time ";
cin>>time;
current = charge / time;
cout<<"Current is = "<<current;
}