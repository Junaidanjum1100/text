#include<iostream>
using namespace std;

main()
{
    int startHour, startMinute, endHour,endMinute;
  while(true)
  {
    cout<<"Exam starting time(hour) : ";
    cin>>startHour;
    cout<<"Exam stating time(minutes) : ";
    cin>>startMinute;
    cout<<"Student hour of arrival : ";
    cin>>endHour;
    cout<<"Student minutes of arrival : ";
    cin>>endMinute;
    int tStartingMinutes= ((startHour * 60) + (startMinute));
    int tarrivalMinutes = ((endHour * 60)+ (endMinute));
    int differencetime = tStartingMinutes - tarrivalMinutes;
    int hour = differencetime / 60;
    int minutes= differencetime % 60;
    if(differencetime < 0 && differencetime > -60)
    {
      cout<<"Late"<<endl<<-1*minutes<<" minutes after the start "<<endl;
    }
    else if(differencetime <= -60)
    {
         cout<<"Late "<<endl<<-1*hour<<":"<<-1*minutes<<" hour after the start "<<endl;
    }
    else if(differencetime >0 && differencetime <=30)
    {
        cout<<"On time "<<endl<<minutes<<" minutes before the start "<<endl;
    }
    else if( differencetime == 0)
    {
        cout<<"On time "<<endl;
    }
    else if(differencetime > 30 && differencetime < 60)
    {
        cout<<"Early "<<endl<<minutes<<" minutes before the start"<<endl;
    }
    else
    {
      cout<<"Early "<<endl<<hour<<":"<<minutes<<" hours before the start "<<endl;
    }
    
  }
}