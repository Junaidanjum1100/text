#include<iostream>
using namespace std;
int calculateBonus(int days);
main(){
int days,result;
cout<<"Enter the billable days for know the bonus ";
cin>>days;
result = calculateBonus(days);
cout<<"calculate Bonus of  "<<days <<"  "<<  result;
}
int calculateBonus(int days)
{
int r;
if(days >= 0 && days<=32 )
{
r= days * 0;
return r;
}
else if(days >32 && days<= 40)
{
r = ((32 * 0) + ((days - 32)*325));
return r;
}
else if(days >= 41 && days <=48)
{
r = ((32*0) + (8 *325)+((days -40)*550));
return r;
}
else 
{
r = ((32*0)+ (8*325)+(8*550)+((days-48)*600));
return r;
}
}