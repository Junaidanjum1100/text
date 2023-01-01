#include<iostream>
using namespace std;
void packman();
main()
{
 int range,n=0;
 cout<<"How many time you want to show packman ";
 cin>>range;
 while(n<= range)
 {
   packman();
   n++;
 }

}

void packman()
{
 cout<<"                 .::---::..          "<<endl;
 cout<<"              .-------------.        "<<endl;
 cout<<"            .-----------------.      "<<endl;
 cout<<"            ----------------:.       "<<endl;
 cout<<"            :----------::.           "<<endl;
 cout<<"            ----------:.             "<<endl;
 cout<<"            :------------:..         "<<endl;
 cout<<"             :---------------:.      "<<endl;
 cout<<"              .--------------:.      "<<endl;
 cout<<"                .:--------:.         "<<endl;
 cout<<endl<<endl;

}