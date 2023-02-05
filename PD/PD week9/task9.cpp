#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
main()
{
    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string number;
    cout << "Enter the PIN  4 digit  : ";
    cin >> number;
    for (int idx = 0; idx < 4; idx++)
    {
        int result = (int(number[idx])-'0') + idx;
      if(result >= 10)
      {
        result= result-10;
        cout<<move[result]<<" , ";
      }
      else
      {
        cout<<move[result]<<" , ";
      }
    }

  
}