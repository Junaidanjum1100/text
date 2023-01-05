#include<iostream>
#include<cmath>
float calculateHeight(float base , float degree);
using namespace std;
main()
{
 float base, degree, height;
 cout<<"Enter value of base: ";
 cin>>base;
 cout<<"Enter  Angle : ";
 cin>>degree;
 height = calculateHeight(base, degree);
 cout<<"Hight of the tree is "<<height<<endl;
 
}
float calculateHeight(float base , float degree)
 {
  float radian, result, hight;
  radian = degree / 57.2958;
  result = tan(radian);
  hight = result * base;
   return hight;  
  }   