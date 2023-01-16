#include<iostream>
using namespace std;
int result(int n, char c);
main(){
int num,r;
char ch;
cout<<"Enter the boiling point of water ";
cin>>num;
cout<<"Enter the symbol of scale ";
cin>>ch;
r= result(num, ch);
cout<<"isBoiling("<<num<<", "<<ch <<")" <<  r;
}
int result(int n, char c)
{
int num;
char ch;
if(num = 212 || ch =='F') 
{
return 1;
}
 if( num = 100 || ch =='C')
{
return 1;
}
else
{
return 0;
}
}