#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void printPacman(int x, int y);
void gotoxy(int x, int y);
void erase(int x, int y);
void score();
void showGhost(int x, int y);
void clear(int x, int y , char previous);
char getCharAtxy(short int x, short int y);

main()
{
  

  int c=0;
  int pacmanX = 4;
  int pacmanY = 4;
  bool gameRunning = true;
  
  system("cls");
  printmaze();
  
  
  printPacman(pacmanX , pacmanY);
  
  while(gameRunning)
   {
    
     if(GetAsyncKeyState(VK_LEFT))
       {
         char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
           if(nextLocation == ' ' || nextLocation == '.')
            {
            
               erase(pacmanX , pacmanY);
               pacmanX = pacmanX - 1;
               printPacman(pacmanX , pacmanY);
            }
        }
       if(GetAsyncKeyState(VK_RIGHT))
       {
         char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
           if(nextLocation == ' ' || nextLocation == '.')
            {
              
               erase(pacmanX , pacmanY);
               pacmanX = pacmanX + 1;
               printPacman(pacmanX , pacmanY);
            }
        }
      if(GetAsyncKeyState(VK_UP))
       {
         char nextLocation = getCharAtxy(pacmanX , pacmanY -1);
           if(nextLocation == ' ' || nextLocation == '.')
            {
              
               erase(pacmanX , pacmanY);
               pacmanY = pacmanY - 1;
               printPacman(pacmanX , pacmanY);
            }
        }
       if(GetAsyncKeyState(VK_DOWN))
       {
         char nextLocation = getCharAtxy(pacmanX , pacmanY + 1);
           if(nextLocation == ' ' || nextLocation == '.')
            {
             
               erase(pacmanX , pacmanY);
               pacmanY = pacmanY + 1 ;
               printPacman(pacmanX , pacmanY);
            }
        }
      if(GetAsyncKeyState(VK_ESCAPE))
        {
          gameRunning = false;
        }
       Sleep(100);
       
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
 cout<<"||   %%%%%%%%%%%%%%%%%%                 %%%%%%%%%%%%%%%%%   |%|..   %%%%   ||"<<endl;
 cout<<"||..          |%|   |%|    |%|...       |%|                 |%|..    |%|   ||"<<endl;
 cout<<"||..          |%|   |%|    |%|...       |%|           |%|   |%|..    |%|   ||"<<endl;
 cout<<"||..          %%%%%%%      |%|...       %%%%  %%%%%%%%%%%      ..   %%%%.  ||"<<endl;
 cout<<"||..          |%|      . . |%|...       ....  ...........  |%| ..          ||"<<endl;
 cout<<"||..          %%%%%%%%%. . |%|...       %%%%  %%%%%%%      |%| ..   %%%%.  ||"<<endl;
 cout<<"||..                |%|.                |%|.  ....         |%| ..    |%|.  ||"<<endl;
 cout<<"||.       ........                      |%|.    ..|%|                |%|.  ||"<<endl;
 cout<<"||. |%|   |%|%%%|%|.|%|. |%|               ...  ..|%|          ..|%| |%|.  ||"<<endl;
 cout<<"||. |%|   |%|   |%|..    %%%%%%%%%%%%%%%%  ..   ..|%|           .|%|       ||"<<endl;
 cout<<"||. |%|   |%|   |%|..              ...|%|       %%%%%          . |%|.      ||"<<endl;
 cout<<"||. |%|                            ...|%|                  |%| ..|%|.      ||"<<endl;
 cout<<"||. |%|   %%%%%%%%%%%%%            ...|%|%%%%%%%           |%| ..|%|%%%%%  ||"<<endl;
 cout<<"||. ......................       ............              |%| ..........  ||"<<endl;
 cout<<"||   ......................                     ........          .......  ||"<<endl;
 cout<<"||. |%|   |%|   |%|..    %%    %%%%%%%%%%  .......|%|      |%| ..|%|.      ||"<<endl;
 cout<<"||.       |%|   |%|..              ...|%|     %%%%%%%      |%| ..|%|.      ||"<<endl;
 cout<<"||..|%|                            ...|%|                  |%| ..|%|.      ||"<<endl;
 cout<<"||..|%|   %%%%%%%%%%%%%            ...|%|%%%%%%%%%%%       |%| ..|%|%%%%%  ||"<<endl;
 cout<<"||............................                             |%|             ||"<<endl;
 cout<<"||  ................................................               ......  ||"<<endl;
 cout<<"#############################################################################"<<endl;
 cout<<endl<<endl;
}
void erase(int x, int y)
 {
  gotoxy(x, y);
  cout<<" ";
 }
void printPacman(int x, int y)
{
  gotoxy(x, y);
  cout<<"P";
}
char getCharAtxy(short int x, short int y)
 {
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x,  y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci ,coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
 }
void score()
 {
  int c=1;
  gotoxy(8,30);
  cout<<"Your score "<<c++;
 }
 void clear(int x, int y , char previous)
 {
  gotoxy(x, y);
  cout<<previous;
 }
 void showGhost(int x, int y)
 {
  gotoxy(x, y);
  cout<<"G";
 }