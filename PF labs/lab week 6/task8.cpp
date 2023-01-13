#include<iostream>
using namespace std;
float budget(int income , string ticket, int person);
main()
{
    string ticket;
    int person,income;
    float result;
    while(true)
    {
        cout<<"Enter the total income : ";
        cin>>income;
        cout<<"Enter the ticket categories VIP or Normal : ";
        cin>>ticket;
        cout<<"Enter the number of person's : ";
        cin>>person;
        result = budget(income , ticket, person);
        if(result >= 0)
        {
         cout<<"Yes ! You have "<<result<<" QR left "<<endl<<endl;

        }
        else
        {
            cout<<" NOt enough money! You need "<<result * -1<<" QR."<<endl<<endl;

        }


    }
}
float budget(int income,string ticket, int person)
{
    float result,totalPrice;
    if(ticket == "Nortmal")
    {
        if(person >=1 && person <=4 )
         {
            result = income * .25;
            totalPrice = person * 249.99;
            result = income - totalPrice;

         }
        else if (person >=5 && person <=9)
         {
            result = income * .40;
            totalPrice = person * 249.99;
            result = income - totalPrice;

         }
          else if (person >=10 && person <=24)
         {
            result = income * .50;
            totalPrice = person * 249.99;
            result = income - totalPrice;

         }
          else if (person >=25&& person <=49)
         {
            result = income * .60;
            totalPrice = person * 249.99;
            result = income - totalPrice;

         }
         else
         {
            result = income * .75;
            totalPrice = person * 249.99;
            result = income - totalPrice; 
         }
    }
       if(ticket == "VIP")
    {
        if(person >=1 && person <=4 )
         {
            result = income * .25;
            totalPrice = person * 499.99;
            result = income - totalPrice;

         }
        else if (person >=5 && person <=9)
         {
            result = income * .40;
            totalPrice = person * 499.99;
            result = income - totalPrice;

         }
          else if (person >=10 && person <=24)
         {
            result = income * .50;
            totalPrice = person * 499.99;
            result = income - totalPrice;

         }
          else if (person >=25&& person <=49)
         {
            result = income * .60;
            totalPrice = person * 499.99;
            result = income - totalPrice;

         }
         else
         {
            result = income * .75;
            totalPrice = person * 499.99;
            result = income - totalPrice; 
         }
    }
    return result;
}