#include<iostream>
#include<math.h>
using namespace std;
int dis(int a, int b);
main(){
int start_point , end_point;
float result;
cout<<"Enter the starting point ";
cin>>start_point;
cout<<"Enter the ending point ";
cin>>end_point;
result = dis(start_point, end_point);
cout<<"Euclidean distance = "<<result;
}
int dis(int a, int b)
{
float r;
r = (sqrt ((a-b)*(a-b))) ;
return r;
}
