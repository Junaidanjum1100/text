#include<iostream>
using namespace std;
main()
{
double bits;
cout<<"Enter  bits ";
cin>>bits;
cout<<bits <<" are = "<<(bits/8)<<"bytes "<<endl;
cout<<bits <<" are = "<<(bits/8)/1024 <<" KB"<<endl;
cout<<bits <<" are = "<<((bits/8)/1024)/1024<< " MB"<<endl;

}