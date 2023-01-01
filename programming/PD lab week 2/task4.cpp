#include<iostream>
using namespace std;
void pacman();
main()
{
 int range, n=0;
 cout<<"How many time you want to show word PACMAN ";
 cin>>range;
 while(n < range)
 {
  pacman();
  n++;
 }
}
void pacman()
{
 cout<<"### ##     ##       ## ##       ##   ##      ##        ###  ## "<<endl;
 cout<<" ##  ##     ##     ##   ##       ## ##        ##         ## ## "<<endl;
 cout<<" ##  ##   ## ##    ##           # ### #     ## ##      #  ## # "<<endl;
 cout<<" ##  ##   ##  ##   ##           ## # ##     ##  ##     ##  ##  "<<endl;
 cout<<" ## ##    ## ###   ##           ##   ##     ## ###     ##   ## "<<endl;
 cout<<" ##       ##  ##   ##   ##      ##   ##     ##  ##     ##   ## "<<endl;
 cout<<"####      ##  ##    ## ##       ##   ##    ###  ##    ###   ## "<<endl;
 cout<<endl<<endl;
}  
