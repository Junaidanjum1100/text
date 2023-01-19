#include<iostream>
using namespace std;
int frequencyCheck(int number , int digit);
main()
{
    int number, digit, result;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Enter the digit : ";
    cin>>digit;
    result = frequencyCheck(number, digit);
    cout<<result;
}
int frequencyCheck(int number , int digit)
{
    int count = 0,a;
    while(number > 0)
    {
         a = number % 10;
        if(a == digit)
        {
            count++;
        }
        number = number / 10;
    }
    return count;
}