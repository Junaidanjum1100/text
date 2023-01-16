
       // finding multiplies of 2 number and there sum.

#include<iostream>
using namespace std;
main(){
 int n1,n2,t1,t2,sum1,sum2,Total_sum;
 t1=t2=sum1=sum2=0;
 cout<<"Enter number 1 for multiplies ";
 cin>>n1;
 cout<<"Enter number 2 for multiplies ";
 cin>>n2;
 for(int c=0 ; c<5 ;c++) //for finding multiplies of number 1
 {
  t1 = t1 + n1;  
  sum1=sum1+t1;
 cout<<t1 <<" ";
  }
  cout<<endl;
 for(int c=1; c<6 ;c++) // for finding multiplies of number 2
 {
  t2=t2+n2;
  sum2=sum2+t2;
 cout<<t2<< " ";
 }
 Total_sum = sum1 + sum2;
cout<<endl<<"Total sum "<<Total_sum;
}
 