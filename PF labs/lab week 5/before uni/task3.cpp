#include<iostream>
using namespace std;
int equal(int num1, int num2, int num3);
main(){
int num1, num2, num3,result;
cout<<"Enter the three numbers ";
cin>>num1>>num2>>num3;
result = equal(num1,num2,num3);
cout<<"Equal numbers are "<<result;
}
int equal(int num1, int num2, int num3)
{
if(num1==num2 && num1==num3)
{
return 3;
}
else if( (num1 == num2 && num1 !=num3) || (num1== num3 && num1 != num2))
{
return 2;
}
else
{return 0;
}
}