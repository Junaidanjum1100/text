#include<iostream>
using namespace std;
main()
{
float maga_bytes;
double bits;
cout<<"Enter the Maga bytes ";
cin>>maga_bytes;
bits = (maga_bytes * 1024 * 1024 * 8);
cout<<maga_bytes<<"maga byte = " <<bits <<" bits" ;
}
