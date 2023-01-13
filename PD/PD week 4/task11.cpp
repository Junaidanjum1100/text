#include<iostream>
using namespace std;
void challan(int speed); 
main()
{
 int speed;
 while(true)
 { 
  cout<<"Enter car speed in (kilometer per hour) Km/h   ";
  cin>>speed;
  challan(speed);
 }
}
void challan(int speed)
{
 if(speed > 100)
 {
  cout<<"Halt....YOU WILL BE CHALLENGED!!!"<<endl<<endl;
 }
 if(speed <= 100)
 {
  cout<<"Perfect! You're going good. "<<endl<<endl;
 }
}
 