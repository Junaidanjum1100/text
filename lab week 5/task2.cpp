#include<iostream>
#include<cmath>
using namespace std;
float xpositive( float a, float b, float sqar , float result , float sqarroot);
float xnegative( float a, float b,float sqar , float result , float sqarroot);


main()
{
 float a ,b ,c ,x1,x2,sqar,sqarroot,power,result;
 while(true)
 {
  cout<<" ax^2 + bx + c = 0 "<<endl;
  cout<<"Enter value of a : ";
  cin>>a;
  cout<<"Enter value of b : ";
  cin>> b;
  cout<<"Enter value of c : ";
  cin>>c;
  sqar = b * b;
  result = (sqar - (4 * a * c));
  sqarroot = sqrt(result);
  x1 = xpositive(a,b,sqar,result,sqarroot);
  x2 = xnegative(a,b,sqar,result,sqarroot);
 
  cout<<"x1 "<<x1 <<endl;
  cout<<"x2 "<<x2 <<endl<<endl;
 }
}
float xpositive(  float a,float b ,float sqar , float result , float sqarroot)
 {
   float x1;
   x1 = (-b + sqarroot) / (2 * a);
   return x1;
 }
float xnegative( float a, float b,float sqar , float result , float sqarroot)
 {
  float x2;
  x2 = (-b - sqarroot) / (2 * a);
  return x2;
 }