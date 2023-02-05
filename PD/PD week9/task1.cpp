#include<iostream>
using namespace std;
main()
{
    string fruit[4] ={"peach", "apple","guava","watermelon"};
    int price[4] = {60, 70, 40, 30};
    string fruitName;
    float quantity,totalPrice;
    cout<<"Enter the fruit name (peach, apple, guava, watermelon )  ";
    cin>>fruitName;
    cout<<"Enter the quantity of fruit in Kg   ";
    cin>>quantity;
    for(int idx=0 ; idx<4 ; idx++)
    {
        if(fruit[idx] == fruitName)
        {
           totalPrice = price[idx] * quantity; 
           break;
        }
    }
    cout<<"Total Price =  "<<totalPrice<<endl;
}