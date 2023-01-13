#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void move(int x, int y);
main()
{
 int x=7, y=5;
 system("cls");
 printmaze();
 while(true)
 {
  move(x , 5);
  if(x < 21)
  {
   x++;
  }
  if(x == 21)
  {
   gotoxy(x-1, y);
   cout<<" ";
   x=7;
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
 gotoxy((x-1), y);
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(700);
}