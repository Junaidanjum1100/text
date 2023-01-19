#include<iostream>
using namespace std;
float calculatePrice(float money , int year ); 
main()
{
  float money,result ;
  int year;
  cout<<"Enter  the money : ";
  cin>>money;
  cout<<"Enter the year  [1800 .... 1900]  : ";
  cin>>year;
  result = calculatePrice(money, year);
  if(result <= 0)
  {
     cout<<"Yes ! He will live a carefree life and will have "<<result* -1<<"  dollars left "<<endl;

  }
  else
  {
    cout<<"He will need "<<result  <<"dollars to survive ";
  }

}
float calculatePrice(float money , int year )
{
  float result , evenSum,sum=0,totalSum;
  int evenCount=0;
  int oddYears = year - 1800;

  for(int i= 1800 ; i<= year ; i= i+2)
  {
     if( i % 2 == 0)
     {
        evenCount++;
     }  
    
  }
  for(int i=1 ; i<= oddYears ;i++)
  {
    if(i % 2 != 0)
    {
     sum = (sum + ( 12000 + ( 50 * (18 + i)))) ;
    }
  }
   
   evenSum = 12000 * evenCount ;
   totalSum = sum + evenSum;
   result = totalSum - money ;
   return result;
}
