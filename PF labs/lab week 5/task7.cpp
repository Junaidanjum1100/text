#include<iostream>
using namespace std;
main()
{
 while(true)
  {
   float volume, p1, p2 ;
   float hour, totalMinutes, waterperMinute,totalflow;
   cout<<"Enter volume of the pool in liters ..     [1....10000] : ";
   cin>>volume;
   cout<<" Enter the flow rate of first pipe per hour[ 1...5000] : ";
   cin>>p1;
   cout<<" Enter the flow rate of second pipe per hour[1...5000] : ";
   cin>>p2;
   cout<<"Enter the hours the worker is absent    [1.00...24.00] : ";
   cin>>hour;
   totalMinutes = hour * 60;
   float p1water =( p1/60) * totalMinutes;
   float p2water =( p2/60) * totalMinutes;
   
   float pipeswater =( p1/60) + (p2/60);
   totalflow = totalMinutes * pipeswater;
   cout<<totalflow<<endl;
   if( totalflow > volume )
    {
      float flowWater = totalflow - volume ;
      cout<<"for "<<hour<<" hours the pool overflows with "<<flowWater<<" liters."<<endl<<endl;
    }
   if( totalflow < volume)
    {
      float poolfull = (totalflow * 100)/(volume);
      int pipe1    = (p1water *100)/(totalflow) ;
      int pipe2    = (p2water *100) / (totalflow);
      cout<<"The pool is "<<poolfull<<"% full. Pipe 1:"<<pipe1<<"% . pipe 2: "<<pipe2<<"%"<<endl<<endl;
    }
  }
}
   
   
   
   
   
