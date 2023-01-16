#include<iostream>
using namespace std;
int chocolate_parcel(int a, int b, int c); //a use as small, buse as big chocolate parcel and c use as grams total
main(){
int n_small, n_big, grams,result;
cout<<"Enter number of small chocolate ";
cin>>n_small ;                         // each has 8 grams
cout<<"Enter number of big chocolates ";
cin>>n_big;                          //each has 5 grams
cout<<"Enter total weight of the pasrasl ";
cin>>grams;
result = chocolate_parcel(n_small, n_big, grams);
cout<<result;
}
int chocolate_parcel(int a, int b, int c)
{
int r;
 r = (a*2 + b*5);
if (r == c)
 return a;
else
return -1;
}