                          // find time is hour : minutes ( adding 15 minutes more)
#include<iostream>
using namespace std;
main()
{
  while(true)
  { 
   int hour, minutes,totalMinutes, hourTime, minutesTime;
   cout<<"Enter hour 0...23:  ";
   cin>>hour;
   cout<<"Enter minutes 0....59 : ";
   cin>>minutes;
   totalMinutes = (60 * hour) + minutes + 15 ;
   hourTime = totalMinutes / 60 ;
   minutesTime = totalMinutes % 60 ;
   cout<<"Hour : minutes "<<endl;
   cout<<hourTime<<"   :  "<<minutesTime<<endl<<endl<<endl;
  }
}

