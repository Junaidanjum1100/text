#include <iostream>
using namespace std;
float apartment(string month, int days);
float stdio(string month, int days);
main()
{
    string month;
    int days;
    float price1, price2;
    while (true)
    {
        cout << "Enter the month (first letter must be capital )  :"<<endl;
        cout << "month should be May, June, July , August, September, October  : ";
        cin >> month;
        cout << "Enter days you want to stay : ";
        cin >> days;
        price1 = apartment(month, days);
        price2 = stdio(month, days);
        cout << "Apartment : " << price1 << "$" << endl;
        cout << "Studio    : " << price2 << "$" << endl
             << endl;
    }
}
float apartment(string month, int days)
{
    float price;
    if (month == "May" || month == "October")
    {
        if (days > 14)
        {
            price = ((days * 65) * (.90));
        }
        else
        {
            price = days * 65;
        }
    }
     else if (month == "June" || month == "September")
    {
        if (days > 14)
        {
            price = ((days * 68.70) * (.90));
        }
        else
        {
            price = days * 68.70;
        }
    }
      else if (month == "July" || month == "August")
    {
        if (days > 14)
        {
            price = ((days * 77) * (.90));
        }
        else
        {
            price = days * 68.70;
        }
    }
    else
    {
        price  = 0;
    }
    return price;
}
float stdio(string month, int days)
{
    float price;
    if (month == "May" || month == "October")
    {
        if (days > 7 && days <= 14)
        {
            price = (days * 50 * .95);
        }
        else if (days > 14)
        {
            price = (days * 50 * .70);
        }
        else
        {
            price = days * 50;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (days > 14)
        {
            price = (days * 75 * .80);
        }
        else
        {
            price = days * 75;
        }
    }
    else if (month == "July" || month == "August")
    {
        price = days * 76;
    }
    else
    {
        price = 0;
    }
    return price;
}