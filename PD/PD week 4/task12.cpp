#include<iostream>
void price(int , int , int );
using namespace std;
main()
{
 int red_rose , white_rose, tulips;
 while(true)
 {
   cout<<"Enter number of Red rose   : ";
   cin>>red_rose;
   cout<<"Enter number of White rose : ";
   cin>>white_rose;
   cout<<"Enter number of Tulips     : ";
   cin>>tulips;
   price(red_rose , white_rose , tulips);
   cout<<endl<<endl;
 }
}
 
void price(int red_rose, int white_rose, int tulips)
{
 float red_price , white_price , tulips_price, total_price,discount,price;
 red_price =  red_rose * 2.00 ;
 white_price = white_rose * 4.10;
 tulips_price = tulips * 2.50;
 total_price = red_price + white_price + tulips_price ;
 
 if(total_price > 200)
 {
   discount = total_price * .20;
   price = total_price - discount;
   cout<<"Original Price : "<<total_price<<" $"<<endl;
   cout<<"Price after Discount : "<<price<<" $"<<endl;
 }
 
 if(total_price <= 200)
  {
   cout<<"Total price "<<total_price <<" $"<<endl;
  }
}
 
