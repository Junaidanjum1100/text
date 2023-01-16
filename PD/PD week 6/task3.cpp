#include<iostream>
using namespace std;
string astrological(int day, string month);
main()
{
 int day;
 string month , output;
 while(true)
 {
    cout<<"Enter the Date : ";
    cin>>day;
    cout<<"Enter the month : ";
    cin>>month;
    output = astrological(day, month);
    cout<<output<<endl<<endl;
 }
}
string astrological(int day, string month)
{
    string result ;

    if((month == "March" && day >= 21) || (month == "April" && day <= 19))
    {
        result = "Aries";
    }
      
    else if((month == "April" && day >= 20) || (month == "May" && day <= 20))
    {
        result = "Taurus";
    }
    else if((month == "June" && day <= 20) || (month == "May" && day >= 21))
    {
        result = "Gemini";
    }
    else if((month == "June" && day >= 21) || (month == "July" && day <= 22))
    {
        result = "Cancer";
    }
    else if((month == "july" && day >= 23) || (month == "August" && day <= 21))
    {
        result = "Leo";
    }
      else if((month == "August" && day >= 23) || (month == "September" && day <=22))
    {
        result = "Virgo";
    }
    else if((month == "September" && day >= 23) || (month == "October" && day <= 22))
    {
        result = "Libra";
    }
      else if((month == "November" && day <= 21) || (month == "October" && day >= 23))
    {
        result = "Scorpio";
    }
      else if((month == "November" && day >= 22) || (month == "December" && day <= 21))
    {
        result = "Sagittarius";
    }
       else if((month == "January" && day <= 19) || (month == "December" && day <= 21))
    {
        result = "Capricorn";
    }
       else if((month == "December"  && day >= 02) || (month =="De" && day <= 21))
    {
        result = "Sagittarius";
    }
       else if((month == "January"  && day >= 20) || (month == "February" && day <= 18))
    {
        result = "Aquarius";
    }
       else if((month == "February"  && day >= 02) || (month == "March" && day <= 21))
    {
        result = "Sagittarius";
    }

    else
    {
         result = "invalid input ";
    }
    return result;
}