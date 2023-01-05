#include<iostream>
#include<cmath>
using namespace std;


main()
{
 float num1, num2;
 cout<<"Enter number 1: ";
 cin>>num1;
 cout<<"Ener number 2: ";
 cin>>num2;
  float total = max(num1 , num2);
 cout<<total<<"  is greater number "<<endl;
   total = min(num1 ,num2);
 cout<<total<<" is smaller number "<<endl;
  total = sqrt(num1);
  cout<<"Squar root of "<<num1<<" "<<total<<endl;
  total = pow(num1 ,num2);
  cout<<" power of num1 ^
  num2 "<<total;
  total = cbrt(num1);
  cout<<"cube root of "<<num1<<" "<<total;
  cout<<"Enter a decimal number ";
  cin>>num1;
  total = ceil(num1);
  cout<<"Ceiling of num 1 "<<total<<endl;
  cout<<"Enter a number of floor process ";
  cin>>num2;
  total = floor(num2);
  cout<<"Floor of the number "<<total<<endl;
  
  

}