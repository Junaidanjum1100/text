#include<iostream>
using namespace std;

float divide(float num1 , float num2);
int isGreater(float num1  , float num2);
main()
{
 float num1, num2,result;
 float division;
 cout<<"Enter number 1: ";
 cin>>num1;
 cout<<"Enter number 2: ";
 cin>>num2;
 division = divide(num1, num2);
 cout<<"Division : "<<division<<endl;
 result = isGreater(num1 , num2);
 cout<<"Greater number : "<<result<<endl;
 cout<<"Program ends ";
}
float divide (float num1 , float num2)
 {
 float d;
 d = num1 / num2;
  return d;
 }
int isGreater(float num1  , float num2)
{
 if(num1 > num2)
  {
   return num1;
  }
 if(num1 < num2)
  {
   return num2;
  }
 return 0;
}