#include<iostream>
using namespace std;
float price(string fruit, string day, float quantity);
main()
{
    string fruit, day;
    float quantity, totalPrice;
    while(true)
    {
        cout<<"Enter the fruit name (banana or apple, orange , grapefruit,kiwi, pineapple,or grapes : "<<endl;
        cin>>fruit;
        cout<<"Enter the day (first letter capital) : ";
        cin>>day;
        cout<<"Enter the quantity  : ";
        cin>>quantity;
        totalPrice = price(fruit, day, quantity);
        cout<<"Total price : "<<totalPrice <<endl<<endl;
    }
}
float price(string fruit, string day, float quantity)
{
    float money;
    if((day == "Sunday" || day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day== "Friday" || day == "Saturday"))
    {
        if(fruit == "banana")
        {
            money = quantity * 2.50;
        }
        else if(fruit == "apple")
        {
            money = quantity * 1.20;
        }
         else if(fruit == "orange")
        {
            money = quantity * 0.85;
        }
         else if(fruit == "grapefruit")
        {
            money = quantity * 1.45;
        }
         else if(fruit == "kiwi")
        {
            money = quantity * 2.70;
        }
         else if(fruit == "pineapple")
        {
            money = quantity * 5.50;
        }
         else if(fruit == "grapes")
        {
            money = quantity * 3.85;
        }
    }
    else if (day == "Sunday")
    {
          if(fruit == "banana")
        {
            money = quantity * 2.70;
        }
        else if(fruit == "apple")
        {
            money = quantity * 1.25;
        }
         else if(fruit == "orange")
        {
            money = quantity * 0.90;
        }
         else if(fruit == "grapefruit")
        {
            money = quantity * 1.60;
        }
         else if(fruit == "kiwi")
        {
            money = quantity * 3.00;
        }
         else if(fruit == "pineapple")
        {
            money = quantity * 5.60;
        }
         else if(fruit == "grapes")
        {
            money = quantity * 4.20;
        }
    }
   
    return money;
}