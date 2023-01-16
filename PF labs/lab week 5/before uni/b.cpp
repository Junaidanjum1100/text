#include<iostream> //This program is about a firm project ..week 1 lecture 2..task
using namespace std;
void Hour(int required_hours , int required_days , int workers);
main(){
int required_hours, required_days,workers;
cout<<"Enter the required hours ";
cin>>required_hours;
cout<<"Enter the required days for completing the project ";
cin>>required_days;
cout<<"Enter the number of worker for complete the project ";
cin>>workers;
 Hour(required_hours, required_days,workers);
}
void Hour(int required_hours , int required_days , int workers)
{
 float working_hours;
int left_hours;
 working_hours =( ((required_days)-(required_days * .10))*(10)*(workers));
 
 left_hours= working_hours - required_hours ;
 if(working_hours >= required_hours)
  {
   cout<<"Yes!"<<left_hours<<"  hours left";
  }
 else
 cout<<"1 Not enough time!"<<-1 * left_hours <<"  hours needed ";
 }
 