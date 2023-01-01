#include<iostream>
using namespace std;
void play(int holidays);
main()
{
 int holidays;
 while(true)
 {
  cout<<"Enter holidays  in years  : ";
  cin>>holidays;
  play(holidays);
  cout<<endl;
 }
}

void play(int holidays)
{
 int working_days , holidays_time, working_time, total_time,hours, minutes,time;
 working_days = 365 - holidays ;
 holidays_time = holidays * 127 ;
 working_time = working_days * 63;
 total_time = holidays_time  + working_time ;
 if( total_time <= 30000)
  {
   time    = 30000 - total_time;
   hours   = time / 60;
   minutes = time % 60;
   cout<<"Tome sleeps well "<<endl;
   cout<<hours<<" hours and "<<minutes<<" minutes less for play"<<endl;
  }
 if(total_time > 30000)
 {
   time = total_time - 30000;
   hours = time /60;
   minutes = time % 60;
   cout<<"Tom will run aways "<<endl;
   cout<<hours <<" hours and "<<minutes<<" minutes for play "<<endl;
  }
}
