#include<iostream>
using namespace std;
main()
{
    int number,tons,num1, num2, num3,totalSum;
      double minibus, truck, train ,averagePrice;
    num1 = num2 = num3 =0;
    
    cout<<"Enter cargo for transportation   : ";
    cin>>number;
    for(int i=1 ; i<= number ; i++)
    {
        cout<<" Enter the tons of cargo  "<<i<<" ";
        cin>>tons;
        if(tons >=1 && tons <= 3)
        {
          num1 = num1 + tons;  
        }
        else if(tons > 3 && tons <= 11)
        {
            num2 = num2 + tons;
        }
        else
        {
            num3 = num3 + tons;
        }
        totalSum = num1 + num2 + num3;
      
        minibus= (num1 * 100.0)/ totalSum;
        truck= (num2 * 100.0)/ totalSum;
        train= (num3 * 100)/ totalSum;
        averagePrice= ((num1* 200)+ ( num2 * 175)+ (num3 * 120))/totalSum;
        
    }
        cout<<averagePrice<<endl;
        cout<<minibus<<" % "<<endl;
        cout<<truck<<" % "<<endl;
        cout<<train<<" % " <<endl;
}