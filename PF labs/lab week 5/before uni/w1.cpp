#include<iostream>
using namespace std;
main(){
int start_hours,sub, a,b,start_minutes, arrival_hours, arrival_minutes ,total_startingTime,total_arrivalTime;
cout<<"Enter the time in hours of starting exams ";
cin>>start_hours;
cout<<"Enter the time minutes of starting exams ";
cin>>start_minutes;
cout<<"Enter the time in hours of your arrival ";
cin>>arrival_hours;
cout<<"Enter you time in minutes of your arrival ";
cin>>arrival_minutes;
total_startingTime= (start_hours *60 + start_minutes);
total_arrivalTime = (arrival_hours *60 + arrival_minutes);      
         //when you are late .............
if(total_arrivalTime > total_startingTime){
                   sub =  total_arrivalTime - total_startingTime;
                         if(sub < 60 && sub > 0){
                           cout<<"Late"<<endl<<sub<<" minutes after the start";
                          }
                        else
                         {
                           a = sub /60;
                           b = sub %60;
                           cout<<"Late" <<endl<<a<<":"<<b <<" hours after the start";
                          }
                                            }
 else if (total_arrivalTime <= total_startingTime){  
                           sub =  total_startingTime -  total_arrivalTime ;
                            if ( sub <= 30 && sub >0){
                                 cout<<"on time"<<endl<<sub<<" minutes before the start ";
                                           }
                             else if(sub == 0){
                                     cout<<"on time";
                                              }
                              else if (sub > 30 && sub < 60){
                                     cout<<"Early "<<endl<<sub<<"minutes before the start";
                                                           }
                             else
                              {
                                    a = sub /60;
                                    b = sub %60; 
                                  cout<<"Early"<<endl<<a<<":"<<b<<"hours before the start "; 
                                }
    
                                              } 
 else 
 cout<<"check you watch ";            
 }                            


 


 
  