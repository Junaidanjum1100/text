#include<iostream>
using namespace std;
main()
{
int num1 , num2 , sum;
float n;
cout<<"Enter first number ";
cin>>num1;
cout<<"Enter last number ";
cin>>num2;
n = num2-(num1-1);
sum = (n/2)*(num1 + num2);
cout<<num1 <<"and"<<num2<<"are"<<sum;
}