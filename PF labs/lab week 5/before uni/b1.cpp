#include<iostream>
using namespace std;
void possible(int v_pool , int p1_flow , int p2_flow ,float time);
main(){
int v_pool, p1_flow , p2_flow ;
float time;
cout<<" Enter the volume of the pool ";
cin>>v_pool;
cout<<" Enter the flow rate of pipe 1 ";
cin>>p1_flow;
cout<<"Enter the flow rate of he pipe 2 ";
cin>>p2_flow;
cout<<"Enter hours the worker come back ";
cin>>time;

 possible(v_pool , p1_flow , p2_flow , time);
}
void possible(int v_pool , int p1_flow , int p2_flow ,float time)
{
int flow_sum , a, per_pool, per_p1, per_p2;
float t_time;
 flow_sum = p1_flow + p2_flow;     //per hours flow rate from the pipes
a= flow_sum * time;    // a is use as the total flow of water in required hours.
if(a > v_pool){
  int over_flow;
  over_flow = a - v_pool;
 cout<<" For "<<time <<" hours the pool overflows with "<< over_flow <<" liters";
      }
if(a <= v_pool)
 {
  per_pool = ((a*100)/v_pool);
  per_p1 = (((p1_flow * time)*100)/a);
  per_p2 = (((p2_flow *time)*100)/a);
 cout<<"The pool is "<<per_pool<<"% full. pipe1 : "<<per_p1 <<"%. Pipe2 : "<<per_p2<<"%";
 }
}
  

 