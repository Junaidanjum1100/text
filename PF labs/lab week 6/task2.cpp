#include<iostream>
using namespace std;
float discount(string day, string month, float amount);

main()
{
    string day, month;
    float amount, result;
    cout<<"Enter day : ";
    cin>>day;
    cout<<"Enter month : ";
    cin>>month;
    cout<<"Etner total amount : ";
    cin>>amount;
    result = discount(day, month , amount);
    cout<<" After discount bill : "<<result<<endl;
}
float discount(string day, string month, float amount)
{
    float dis;
    if(day == "Sunday" && (month == "October" || month == "March" || month == "Auguest"))
    {
        dis=  (amount) - (amount * .10);
    }
    else if (day == "Monday" &&  (month == "November" || month == "December"))
    {
        dis = (amount) - (amount * .05);
    }
    else
    {
        dis = amount;
    }
    return dis;


}