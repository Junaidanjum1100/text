#include<iostream>
using namespace std;
int play(string year, int holidays, int home);
main()
{
    int result, holidays, home;
    char ch;
    string year;
    while(true)
    {
        cout<<"Enter the year Leap or Normal : ";
        cin>>year;
        cout<<"Enter the holidays  in years  : ";
        cin>>holidays;
        cout<<"Enter the home visit in years : ";
        cin>>home;
        result = play(year, holidays, home );
        cout<<result<<endl;
        cout<<"Do you want to use this program again "<<endl;
        cout<<"Enter (y) for more use or (n) for not use : ";
        cin>>ch;
        if(ch == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
}
int play(string year, int holidays, int home)
{
    int totalPlay;
    float playHoliday, playSophia, totalWeek=48;
    playHoliday = (holidays)* (2.0/3);
    playSophia  = (totalWeek - home) * (3.0 / 4);
    totalPlay   = playHoliday + playSophia + home; 
    if(year == "Normal")
    {
        return totalPlay;
    }
    else
    {
        totalPlay = totalPlay + ( totalPlay * .15);
        return totalPlay;
    }
}