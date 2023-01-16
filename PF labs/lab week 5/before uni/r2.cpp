        // program find the total time for during three process.
#include<iostream>
#include<cmath>
using namespace std;
main(){
int t1,t2,t3,total_time,minutes,second;
cout<<"Enter time in second for completing first problem  ";
cin>>t1;
cout<<"Enter time in second for completing second problem  ";
cin>>t2;
cout<<"Enter time in second for completing third problem  ";
cin>>t3;
total_time = t1 + t2 + t3;
minutes = total_time / 60;
second = total_time % 60;
cout<<minutes<<" minutes : "<<second<<"second";
}