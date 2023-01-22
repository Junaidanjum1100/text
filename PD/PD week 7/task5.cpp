#include<iostream>
using namespace std;
int  output(int number);
main()
{
    int  number,result;
    cout<<"Enter the number  : ";
    cin>>number;
    result = output(number);
    cout<<result<<endl;
}
int output(int number)
{
    int sum=0;
    for(int i = 1 ;i<= number ; i++)
    {
       sum = sum + i;
    }
    return sum;
}