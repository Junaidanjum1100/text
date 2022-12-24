#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_price , child_price , sold_adult , sold_child ;
float donate_percent, donate_amount, total_amount, final_amount;
cout<<"Enter movie Name : ";
cin>> movie_name;
cout<<"Enter Adult Ticket price : ";
cin>>adult_price;
cout<<"Enter Child Ticket price : ";
cin>>child_price;
cout<<"Enter Number of Ticket sold : ";
cin>>sold_adult;
cout<<"Enter Number of Child Ticket sold " ;
cin>>sold_child;
cout<<"Enter Percentage to Donate : ";
cin>>donate_percent;
total_amount = ((adult_price * sold_adult) + (child_price * sold_child));
donate_amount = ((total_amount ) * (donate_percent /100));
final_amount = total_amount - donate_amount;

cout<<"Total Amount Generated: "<<total_amount<<endl;
cout<<"Amount after donation : "<<final_amount;
}
