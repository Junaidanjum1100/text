#include<iostream>
using namespace std;
main()
{
float average;
int r,n,sum,c;
sum = 0;

cout<<"Enter a the range how many number you wants to enter ";
cin>>r;
for( c =1; c<= r ; c++)
  {
   
  cout<<"Enter a number "<<c <<"  " ;
  cin>>n;
  sum = sum + n ;
  }
 average = (sum / r);
cout<<"average = "<< average ;
}