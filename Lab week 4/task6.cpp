#include<iostream>
using namespace std;
void calculateBill(string day ,int amount);
main()
{
 string day;
 int amount;
 while(true)
 { 
   cout<<"Enter Day ";
   cin>>day;
   cout<<"Enter amount ";
   cin>>amount;
   calculateBill(day, amount);
 }
}
void calculateBill(string day ,int amount)
{
  float discount , total_bill;
 if(day == "sunday" )
  {
    discount = amount * 0.10;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
 if(day == "monday" )
  {
 
   discount = amount * 0.05;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
 if(day == "tuesday" )
  {
 
   discount = amount * 0.05;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
 if(day == "thursday" )
  {
 
   discount = amount * 0.05;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
 if(day == "friday" )
  {
 
   discount = amount * 0.05;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
 if(day == "saturday" )
  {
 
   discount = amount * 0.05;
    total_bill = amount - discount ;
    cout<<"Toal bill after discount "<<total_bill<<endl;
  }
}