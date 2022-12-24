#include<iostream>
using namespace std;
main()
{
float initial_velocity, accerlation, final_velocity;
int time;
cout<<"Enter the Initital velocity  ";
cin>>initial_velocity;
cout<<"Enter the Accerlation : ";
cin>>accerlation;
cout<<"Enter time: ";
cin>>time;
final_velocity = ( (accerlation * time) + (initial_velocity));
cout<<" Final velocity : "<<final_velocity;
}