#include<iostream>
using namespace std;
main()
{
int salary_monthly, target_saving;
float per_saving , monthly_saving;
cout<<"Enter your monthly salary ";
cin>>salary_monthly;
cout<<"Enter percentage of per month saving ";
cin>>per_saving;
cout<<"Enter your target of saving money ";
cin>> target_saving;
monthly_saving = ((per_saving * salary_monthly) / 100);
if(monthly_saving *4 > target_saving)                     //program will run if the target will comeplete before 4 months live 3.9months
{
cout<<"very Nice ";
}
else
{
cout<<"Good";
}
}