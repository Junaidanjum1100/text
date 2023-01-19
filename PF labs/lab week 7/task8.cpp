#include<iostream>

using namespace std;
float machine(int age, float machinePrice, int toyPrice);
main()
{
    int age, toyPrice;
    float machinePrice, result;
    cout<<"Enter the age  : ";
    cin>>age;
    cout<<"Enter the price of the machine : ";
    cin>>machinePrice;
    cout<<"Enter the price of each toy : ";
    cin>>toyPrice;
    result = machine(age, machinePrice, toyPrice);
    if(result < 0)
    {
        cout<<"No ! "<<endl<<result * -1 <<endl;
    }
    else
    {
      cout<<" Yes ! "<<endl<<result<<endl;
    }
}
float machine(int age, float machinePrice, int toyPrice)
{
    int totalSum, sum = 0, count=0, oddcount=0;
    float result;
    for(int i=1 ; i<= age ; i++)
    {
        if( i % 2 != 0)
        {
            oddcount++;
        }
        
    }
    
    for(int i=1 ; i<= (age / 2); i++)
    {
       sum = sum + (i * 10);
       count++;
    }
    
     totalSum = ( (sum - count) + ( oddcount * toyPrice)) ;
     
    result = totalSum - machinePrice ;

    return result;

    
}