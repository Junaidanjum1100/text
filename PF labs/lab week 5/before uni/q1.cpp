#include<iostream>
using namespace std;
void reverse(int a,int b);
main(){
int range ,num,result;
cout<<"Enter range of multiplies ";
cin>>range;
cout<<"Enter the number for multiply ";
cin>>num;
reverse(range,num);
}
void reverse(int a, int b)
{
for(a; a>0 ; a--)
 {
  int multiply;
  multiply = a*b;
cout<<multiply<<" ";
}

}