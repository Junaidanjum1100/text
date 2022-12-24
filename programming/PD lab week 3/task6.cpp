#include<iostream>
using namespace std;
main()
{
int bag_size , bag_cost , pound_cost;
float bag_area, square_cost;
cout<<" Enter Bag Size in Pounds : ";
cin>>bag_size;
cout<<"Enter the cost of the bag : ";
cin>>bag_cost;
cout<<"Enter area covered by each bag in square feet: ";
cin>>bag_area;
pound_cost = bag_cost / bag_size ;
square_cost = bag_cost / bag_area ;
cout<<"Cost of the fertilizer per pound : "<<pound_cost<<endl;
cout<<"cost of fertilizing the area per square feet : "<<square_cost ;
}