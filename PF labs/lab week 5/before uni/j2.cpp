#include<iostream>
using namespace std;
main(){
float price;
string product_name;
cout<<"Enter the name of the product ";
cin>>product_name;
cout<<"Enter the price of the product ";
cin>>price;
if (price > 0)
cout<<"The Price of "<<product_name<<"  is valid";
else
cout<<"The price of "<<product_name<<" in invalid";
}