
  // check lenght of two string are equal or not..
#include<iostream>
#include<string>
using namespace std;

main(){
 string s,p;
cout<<"Enter string s ";
cin>>s;
cout<<"Enter the pattern ";
cin>>p;
if(s.size()== p.size())
cout<<" equal ";
else
cout<<"unequal ";
return 0;
}