#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void move(int x, int y);
main()
{
 int x=7, y=2;
 system("cls");
 printmaze();
 while(true)
 {
  move(7 , y);
  if(y < 21)
  {
   y++;
  }
  if(y == 10)
  {
   gotoxy(x, (y-1));
   cout<<" ";
   y=2;
  }
 }
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
 cout<<"##########################"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl;
 cout<<"#                        #"<<endl; 
 cout<<"##########################"<<endl;
}
void move(int x, int y)
{
 gotoxy(x, (y-1));
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(700);
}