#include<iostream>
using namespace std;
main()
{
float vegetable_price, fruit_price ,total_coins ,total_amount, vegetable_coins , fruit_coins;
int total_vegetable , total_fruit  ;
cout<<"Enter the Vegetable price per kilogram : ";
cin>>vegetable_price;
cout<<"Enter the Fruit price per kilogram : ";
cin>> fruit_price;
cout<<"Enter the  total kilograms of vegetales : ";
cin>>total_vegetable;
cout<<"Enter the toatl kilograms of fruits : ";
cin>>total_fruit;
vegetable_coins = (vegetable_price * total_vegetable);
fruit_coins = (fruit_price * total_fruit );
total_coins =( vegetable_coins + fruit_coins);
cout<<total_coins<<endl;
total_amount = total_coins * 1.94 ;
cout<<" The total amount in rupees "<<total_amount <<" RS ";
}