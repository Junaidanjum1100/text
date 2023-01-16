#include<iostream>
using namespace std;
string state(int h, int x, int y);
main()
{
  int x, y, h;
  string out;
  cout<<"Enter the height of box  : ";
  cin>>h;
  cout<<"Enter the x-axis   : ";
  cin>>x;
  cout<<"Enter the y-axis   : ";
  cin>>y;
  out = state(h, x, y);
  cout<<out<<endl;
}
string state(int h, int x, int y)
{
    string massage;
    if((x>h && x < (3 *h)) && (y>0 && y<h))
    {
        massage = "Inside";
    }
    else if((x>h && x< (2*h)) && (y>0  && y <(4*h)))
      {
        massage = "Inside";
      }
    else if (x<h  && y>h)
    {
        massage = "Outside";
    }
    else if ((x>(2*h) && y>h))
    {
        massage = "Outside";
    }
    else if (x>= 0 && y>(4*h))
    {
        massage = "Outside";
    }
    else
    {
        massage = "At Bordar";
    }
    return massage;
}