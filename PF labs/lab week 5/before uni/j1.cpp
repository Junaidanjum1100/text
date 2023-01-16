#include<iostream>
using namespace std;
int isPrimPythTriple(int a, int b, int c); // a,b,c is use as the sides of the rigt triangle.
main(){
int num1, num2, num3,result;
cout<<"Enter the value of the three sides of the right triangle ";
cin>>num1>>num2>>num3;
 result = isPrimPythTriple(num1,num2, num3);
if(result= 0)
{
cout<<"false";
}
else
{
cout<<"true";
}
}
int isPrimPythTriple(int a, int b, int c)  //if sides are different 
{
int e,f;
if(a > b && a >c){
    e = a*a;
    f = (b*b + c*c);
     if(e = f)
      return 1;
    else
     return 0;
     }
else if(b >a && b > c){
     e = b*b;
     f = (a*a + c*c);
    if (e= f)
     return 1;
    else
     return 0;
    }
else if( c>a && c>> b){
    e = c*c;
    f = (a*a + b*b);
  if (e = f)
   return 1;
   else 
   return 0;
   }
}