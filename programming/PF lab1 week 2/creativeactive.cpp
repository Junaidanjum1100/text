#include<iostream>
void printcar();
using namespace std;

main()

{
 int n;
 n=5;
  while(n > 1)
  {
   printcar();
   n--;
  }
}
void printcar(){
 cout<<"                                ______________________________                                  "<<endl;
 cout<<"                               /    ______________________    \\                                "<<endl;
 cout<<"                     ________ /    /          |           \\    \\____________                    "<<endl;
 cout<<"                    |__           /___________|____________\\            |___\\                  "<<endl;
 cout<<"                    |__|                                                      |                  "<<endl;          
 cout<<"                    |             *                      *                    |                 "<<endl;
 cout<<"                    |           *   *                  *   *                  |                "<<endl;
 cout<<"                    |_________ *     *________________*     *_________________|                "<<endl;
 cout<<"                               *     *                *     *                                   "<<endl;
 cout<<"                                *   *                  *   *                                     "<<endl;
 cout<<"                                  *                      *                                       "<<endl;
}