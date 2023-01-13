#include<iostream>
using namespace std;

main()
{
 
 int hours, days, workers, result;
 float workingDays, daliyWork, totalWorktime;
 while(true)
 {
  cout<<"Enter the hours for project : ";
  cin>>hours;
  cout<<"Enter the  days firms has   : ";
  cin>>days;
  cout<<"Enter the number of  workers :";
  cin>>workers;
  workingDays = days * .90 ;
  totalWorktime   = workingDays * workers * 10;
  if(totalWorktime  > hours)
   {
    result = totalWorktime - hours;
    cout<<"yes! "<<result<<" hours left "<<endl<<endl<<endl;
   }
  if(totalWorktime < hours)
   {
    result = hours - totalWorktime;
    cout<<"Not enought time!"<<result<<" hours needed. "<<endl<<endl<<endl;
   }
 } 
} 
 
 
 