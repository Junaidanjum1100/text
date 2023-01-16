#include<iostream>
using namespace std;
float money(char customerType , char time, int minutes);
main()
{
    char  customerType , time ;
    int  minutes;
    float price;
    while(true)
    {
        cout<<"Enter which type of customer you are (Residental or premium) select (r or p )  : ";
        cin>>customerType;
        cout<<"Press D for day or press 'N' for night time  : ";
        cin>>time;
        cout<<"Enter number of mintues you used the service  : ";
        cin>>minutes;
        price = money(customerType, time, minutes);
        cout<<price<<" $ "<<endl<<endl;
    }
}
 float money(char customerType , char time, int minutes)
 {
    float result;
    if(customerType == 'p' || customerType == 'P')
    {
      if(time == 'n' || time == 'N')
      {
        if(minutes <= 75)
        {
            result = 25;
        }
        else
        {
            result = ((minutes - 75) * (0.10)) + 25;
        }
      }
      else if(time == 'd' || time == 'D')
      {
        if(minutes<= 100)
        {
            result = 25;
        }
        else
        {
            result = ((minutes - 100) * (0.05)) + 25;
        }
      }
      else
      {
        result = 0;
      }

    }
     else if((customerType == 'r' || customerType == 'R'))
      {
        if(minutes <= 50)
        {
            result = 10;
        }
        else
        {
            result = (((minutes - 50) * (0.20)) +( 10));
        }
      }
     else
     {
        result = 0;
     }
     return result;
    }
    
