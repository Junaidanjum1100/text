#include<iostream>
using namespace std;
main()
{
int number,sum,a,b,c,d,e,f,g;
cout<<"Enter a 4 digit interger number ";
cin>>number;
 a = number % 10;
 b = number / 10;
 c = b % 10;
 d = b /10;
 e = d %10;
 f = d /10;
 
 
 sum = a + c + e + f;
 cout<< "output "<<sum;
}
 
