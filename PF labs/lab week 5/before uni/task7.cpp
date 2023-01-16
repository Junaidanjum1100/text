#include<iostream>
using namespace std;
int digitDistance(int a, int b);
main(){
int num1,  sum;
sum=0;
cout<<"Enter the number 1 and number 2 ";
cin>>num1;
while(num1>0)
{
 int r;
  r = num1 % 10;
  sum = sum + r;
   num1 = num1/10;
}
cout<<"sum  "<<sum;
}
