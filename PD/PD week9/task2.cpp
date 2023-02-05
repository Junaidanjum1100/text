#include<iostream>
using namespace std;
main()
{
    string movieName[5]={"Gladiator", "StarWars","Terminator","TakingLives","TombRider"};
    string name;
    float price;
    cout<<"Available movies 9(Gladiator, StartWars, Terminator, TakingLives, TombRider)  "<<endl;
    cout<<"Enter the movie name  :   ";
    cin>>name;
    for(int idx=0 ; idx<5 ; idx++)
    {
        if(movieName[idx] == name)
        {
            if(idx%2 == 0)
            {
                price = 500 * .90;
            }
            else{
                price = 500 * .95;
            }
        }
    } 
    cout<<"After discount "<<price<<endl;
}