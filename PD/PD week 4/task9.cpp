#include<iostream>
using namespace std;
void  reverse(string);
main()
{
 string moment;
 cout<<"Enter condition true/ false ";
 cin>>moment;
 reverse(moment);
}
void reverse(string moment)
{
 if(moment == "true")
 {
  cout<<"false";
 }
 if(moment == "false")
 {
 cout<<"true";
 }
}