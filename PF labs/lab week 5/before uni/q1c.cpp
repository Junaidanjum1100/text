#include<iostream>                // this program is just like example 153= 1*1*1  + 5*5*5  + 3*3*3
using namespace std;
int result(int num);
main()
{
int num,r;
cout<<"Enter a number of only 3 digits ";
cin>>num;
r = result(num);

}
int result(int num)
{
int a ,b, c,d,e;
 a= num % 10;
 b= num /10;
 c= b %10;
 d= b /10;
 e = (a*a*a)+(c*c*c)+(d*d*d);
if (e==num)
{
cout<<"yes"<<num<<"   number is correct according to example ";
}
else
{
cout<<"No"<<num << "   number Is not according to example rule ";
}
}