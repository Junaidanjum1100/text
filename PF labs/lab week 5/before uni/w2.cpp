#include<iostream>
using namespace std;
main()
{
int num1, num2,sum, mul, sub;
char ch;
float r;
cout<<"Enter first number ";
cin>>num1;
cout<<"Enter second number ";
cin>>num2;
cout<<"Enter which operation you want to perform +,*,-,%,/ ";
cin>>ch;
if(ch == '%')
{
 r = num1 % num2;
 cout<<num1 <<"%"<<num2<<"= "<<r;
}
if(ch == '/')
{
 r = num1 / num2;
  if(num2 == 0)
   {
    cout<<"cannot divide"<<num1<<" by zero";
   }
   else
   {
    cout<<num1<<"/"<<num2<<"= "<<r;
   }
}
if(ch =='+' )
   {
     sum = num1 + num2;
      if(sum%2==0)
        {
     cout<<num1<<" + "<< num2<<"= " << sum<<" - even";
      }
        else
     {
       cout<<num1<<" + "<< num2<<"= "<< sum<<" - odd";
     }
   }
else if(ch == '-')
  {
sub = num1 - num2;
   if(sub % 2 ==0)
   {
    cout<<num1<<" - "<< num2<<"=  "<< sub<<" - even";
    }
else
   {
     cout<<num1<<" + "<< num2<<"= "<< sub<<" - odd";
    }
}
else if(ch == '*')
  {
    mul = num1 * num2;
   if(mul % 2 ==0)
   {
   cout<<num1<<" * "<< num2<<"= "<<mul<<" - even";
   }
  else
  {
   cout<<num1<<" * "<< num2<<"= "<<mul<<" - odd";
    }
}
else
{
 cout<<"you have enter invild character / operation";
 }
}
