#include<iostream>
using namespace std;
main()
{
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,sum, multiply, subtration, total_sum;
cout<<"Enter number 1 : ";
cin>>num1;
cout<<"Enter num  2 : ";
cin>>num2;

cout<<"Enter num  3 : ";
cin>>num3;
cout<<"Enter num  4 : ";
cin>>num4;
cout<<"Enter num  5 : ";
cin>>num5;
cout<<"Enter num  6 : ";
cin>>num6;
cout<<"Enter num  7 : ";
cin>>num7;
cout<<"Enter num  8 : ";
cin>>num8;
cout<<"Enter num  9 : ";
cin>>num9;
cout<<"Enter num  10 : ";
cin>>num10;
cout<<"Enter num  11 : ";
cin>>num11;
cout<<"Enter num  12 : ";
cin>>num12;
cout<<"Enter num  13 : ";
cin>>num13;
cout<<"Enter num  14 : ";
cin>>num14;
cout<<"Enter num  15 : ";
cin>>num15;
sum = num1 + num2 + num3 + num4 + num5;
multiply = num6 * num7 * num8 * num9 * num10;
subtration = num11 - num12 - num13 - num14 - num15 ;
total_sum = ((sum + multiply) - ( subtration ));
cout<<"Total  "<<total_sum;
}