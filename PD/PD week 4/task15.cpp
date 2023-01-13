#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void moveright(int x, int y);
void moveup(int x, int y);
void movedown(int x, int y);
main()
{
 int x=4,y=2;
 system("cls");
 printmaze();
 while(y < 16)
  {                     // move down side p.....
  movedown(4 , y);
  if(y < 16)
  {
   y++;
  }
  if(y == 16)
  {
   gotoxy(x, (y-1));
   cout<<" ";
   
  }
 }
 while(x < 64)
 {                          // move right side P.........
  moveright(x , 16);
  if(x < 64)
  {
   x++;
  }
  if(x == 64)
   {
     gotoxy((x-1),y);
     cout<<" ";
   }
 }
 while(y < 17)
  {                          // move up side P..........
    moveup(64,y);
    if(y > 1)
     {
       y--;
     }
     if(y == 1)
   {
     gotoxy(x,(y+1));
     cout<<" ";
   }
  }
 while(x < 64)
  {                          // move left side P..........
    moveup(x,1);
    if(x < 64)
     {
       x--;
     }
     if(x == 4)
   {
     gotoxy((x+1),y);
     cout<<" ";
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
cout<<"#############################################################################"<<endl;
cout<<"||.. ............................................................  ......  ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%%%       ...       %%%%%%%%%%%%%%%%%   |%|..   %%%%   ||"<<endl;
cout<<"||..          |%|   |%|    |%|...       |%|           |%|   |%|..    |%|   ||"<<endl;
cout<<"||..          |%|   |%|    |%|...       |%|           |%|   |%|..    |%|   ||"<<endl;
cout<<"||..          %%%%%%%      |%|...       %%%%%%%%%%%%%%%%%      ..   %%%%.  ||"<<endl;
cout<<"||..          |%|      . . |%|...       .................  |%| ..       .  ||"<<endl;
cout<<"||..          %%%%%%%%%. . |%|...       %%%%%%%%%%%%%      |%| ..   %%%%.  ||"<<endl;
cout<<"||..                |%|.                |%|.......         |%| ..    |%|.  ||"<<endl;
cout<<"||..      ..........|%|.                |%|.......|%|          ..    |%|.  ||"<<endl;
cout<<"||..|%|   |%|%%%|%|.|%|. |%|               .......|%|          ..|%|.|%|.  ||"<<endl;
cout<<"||..|%|   |%|   |%|..    %%%%%%%%%%%%%%%%  .......|%|           .|%|.      ||"<<endl;
cout<<"||..|%|   |%|   |%|..              ...|%|     %%%%%%%          . |%|.      ||"<<endl;
cout<<"||..|%|             .              ...|%|                  |%| ..|%|.      ||"<<endl;
cout<<"||..|%|   %%%%%%%%%%%%%            ...|%|%%%%%%%%%%%%      |%| ..|%|%%%%%  ||"<<endl;
cout<<"||......................................................   |%| ..........  ||"<<endl;
cout<<"||   ...................................................          .......  ||"<<endl;
cout<<"||..|%|   |%|   |%|..    %%%%%%%%%%%%%%%%  .......|%|      |%| ..|%|.      ||"<<endl;
cout<<"||..|%|   |%|   |%|..              ...|%|     %%%%%%%      |%| ..|%|.      ||"<<endl;
cout<<"||..|%|             .              ...|%|                  |%| ..|%|.      ||"<<endl;
cout<<"||..|%|   %%%%%%%%%%%%%            ...|%|%%%%%%%%%%%       |%| ..|%|%%%%%  ||"<<endl;
cout<<"||..................................................       |%| ..........  ||"<<endl;
cout<<"||  ................................................               ......  ||"<<endl;
cout<<"#############################################################################"<<endl;
cout<<endl<<endl;
}

void moveright(int x, int y)
{
 gotoxy((x-1), y);
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(200);
}

void moveup(int x, int y)
{
 gotoxy(x, (y+1));
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(200);
}
void movedown(int x, int y)
{
 gotoxy(x, (y-1));
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(700);
}