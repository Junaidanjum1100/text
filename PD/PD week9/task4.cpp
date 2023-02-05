#include <iostream>
using namespace std;

main()
{
    int size;
    bool find = 0;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter element " << idx + 1 << "   ";
        cin >> array[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        if (array[idx] == 7)
        {
            find = 1;
            break;
        }
    }
    if (find == 1)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "\"there is no 7 in the array\" ";
    }
}