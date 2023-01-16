#include<iostream>
using namespace std;
main(){
int num1, num2, num3;
cout<<"Enter three number and should be interger only ";
cin>>num1>>num2>>num3;
if( num1 != num2){
  if(num3 == num1 || num3 == num2){
  if ( num3 == num2)
   cout<<"Now result is  "<<num1;
   else
  cout<<"Now result is  "<<num2;
           }
  else
   cout<<"number 3 is not equal to any other number";
  }
 else
cout<<"number 1 is  equal to number 2 ";
}