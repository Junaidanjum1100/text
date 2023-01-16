#include<iostream>
#include<math.h>
using namespace std;
void secret(int num);
main(){
int num, result;
cout<<"Enter the number  ";
cin>>num;
 secret(num);
}
void secret(int num)
{
int b,c,sum,r,g,h;
if(num>=10 && num<=52){
    b = num / 10;
    c = num % 10;
    sum = b+c;    // b,c are use for separate number  
       if(sum%2==0){
             g = pow(b,c);
             h = b*c;
             r = g - h;
               cout<<sum<<"  "<<r;
              }
        else
            {
              r = ((b*c)+b);
               cout<<sum<<"  "<<r;
             }
}
else
{
cout<<"Number is not in range";
}
} 