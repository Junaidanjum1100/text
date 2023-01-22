#include<iostream>
using namespace std;
void percentage(int number);
main()
{
    int number ;
    cout<<"Enter the how many numbers you wants to enter : ";
    cin>>number;
    percentage(number);
}
void percentage(int number)
{
    int p1, p2, p3,num,count1, count2, count3;
    p1= p2 = p3 =count1 = count2 =count3 =0;
    for(int i=1 ;i<= number ; i++)
    {
        cout<<"Enter the number "<<i<<"  ";
        cin>>num;
        if(num % 2 == 0)
        {
            count1++;
        }
        if(num % 3 == 0)
        {
            count2++;
        }
        if(number % 4 == 0)
        {
            count3++;
        }
        
    }
    p1 = (count1 * 100.0) / number ;
    p2 = (count2 * 100.0) / number ;
    p3 = (count3 * 100.0) / number ;
    cout<<p1<<" % "<<endl;
    cout<<p2<<" % "<<endl;
    cout<<p2<<" % "<<endl;

}