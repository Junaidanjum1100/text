#include<iostream> //program for finding does triangle is physa..
using namespace std;
main()
{
int a,b,c;
cout<<"Enter three sides of a triangel ";
cin>>a>>b>>c;
if(a*a == (b*b +c*c))
cout<<"True";
else if(b*b == (a*a + c*c))
cout<<"True";
else if(c*c == (a*a + b*b))
cout<<"True";
else
 cout<<"False";
}