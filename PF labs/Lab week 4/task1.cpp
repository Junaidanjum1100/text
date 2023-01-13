#include<iostream>
using namespace std;
void add(int num1, int num2);
void multiply(int num1, int num2);
void subtration(int num1 ,int num2);
void division(int num1 ,int num2);
main()
{
 int num1, num2;
 char operation;
 while(true)
 {
  cout<<"Enter number 1 ";
  cin>>num1;
  cout<<"Enter number 2 ";
  cin>>num2;
  cout<<"Enter operator(+, -, * ,/) ";
  cin>>operation;
 
  if(operation == '+')
  {
   add(num1, num2);
  }
  if(operation == '*')
  {
    multiply(num1 ,num2);
  }
  if(operation == '-')
  {
   subtration(num1 ,num2);
  }
  if(operation == '/')
  {
   division(num1 ,num2);
  }
 }
 
}
void add(int num1,int num2)
{

 int sum=0;
 sum = num1 + num2;
 cout<<"Sum is "<<sum<<endl;
}
void multiply(int num1 , int num2)
{

 int product;
 product = num1 *num2;
 cout<<"Product is "<<product<<endl;
}
void subtration(int num1 , int num2)
{
 int subtract;
 subtract = num1 - num2;
 cout<<"subtration : "<<subtract<<endl;
}
void division(int num1 ,int num2)
{
  float divide;
  divide = num1 / num2;
  cout<<"Division : "<<divide<<endl;
}