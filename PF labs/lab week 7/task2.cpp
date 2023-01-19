#include<iostream>
using namespace std;
void printFibanocci(int num);
main()
{
    int num;
    cout<<"Enter the range number : ";
    cin>>num;
    printFibanocci(num);
  
  
}
void printFibanocci(int num)
{
    int n1=0 , n2=1, result;
      cout<<n1<<","<<n2<<",";
        for(int count =3 ; count<=num; count++)
    {
        result = n1 + n2;
        cout<<result<<",";
         n1 = n2 ;
         n2 = result;
        
    }
}