#include<iostream>
using namespace std;
void check(int , int);
main()
{
 int num1, num2;
 cout<<"Enter number 1 : ";
 cin>>num1;
 cout<<"Enter number 2 : ";
 cin>>num2;
 check(num1 ,num2);
}
void check(int num1 , int num2)
{
 if(num1 == num2)
  {
    cout<<"True";
  }
 if(num1 != num2)
  {
    cout<<"False";
  }
}