#include<iostream>      //Week 1 second lab
using namespace std;
void time(int a ,int b, int c);
main(){
int t1,t2, t3,time_sum,e,d;
cout<<"Enter time for complete 1st contestants ";
cin>>t1;
cout<<"Enter time for complete 2nd contestants ";
cin>>t2;
cout<<"Enter time for complete 3rd contestants ";
cin>>t3;
time_sum = t1 + t2 + t3;
e = time_sum / 60 ;
d = time_sum % 60 ;
cout<<"time sum  "<<time_sum<<endl<<"minutes : seconds "<<e<<" : "<<d;
}
