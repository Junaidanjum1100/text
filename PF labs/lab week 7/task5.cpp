#include<iostream>
using namespace std;
int totalDigits(int num);
main()
{
    int num ,result;
    cout<<"Enter the number ";
    cin>>num;
    result = totalDigits(num); 
    cout<<result;
}
int totalDigits(int num)
{
    int  a,sum = 0;
    while(num > 0)
    {
       a= num % 10;
       sum = a +  sum ;
       num = num / 10; 
    }
    return sum;
}