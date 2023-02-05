#include<iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number;
    cout<<"How many number you want to enter : ";
    cin>>number;
    printPercentage(number);
}
void printPercentage(int number)
{
    int p1, p2, p3, p4, p5,num;
    p1 = p2 = p3 = p4 = p5 =0;
    for(int i=1 ;i<=number ; i++)
    {
        cout<<"Enter number "<<i<<"  ";
        cin>>num;
        if(num <= 200)
        {
            p1++;
        }
        else if(num > 200 && num <= 400)
        {
            p2++;
        }
         else if(num > 400 && num <= 600)
        {
            p3++;
        }
         else if(num > 600 && num <= 800)
        {
            p4++;
        }
        else if (num > 800  && num <=1000)
        {
            p5++;
        }
    }
    cout<<  (p1 *100.0) / number<<" %"<<endl;
    cout<<  (p2 *100.0) / number<<" %"<<endl;
    cout<<  (p3 *100.0) / number<<" %"<<endl;
    cout<<  (p4 *100.0) / number<<" %"<<endl;
    cout<<  (p5 *100.0) / number<<" %"<<endl;
}