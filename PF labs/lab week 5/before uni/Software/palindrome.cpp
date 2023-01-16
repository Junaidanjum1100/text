#include <iostream>
using namespace std;
bool isPalindrome(int num);
main()
{
    int num;
    cout << "Enter Number :- ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << num << " is Palindrome";
    }
    else
    {
        cout << num << " is not Palindrome";
    }
}
bool isPalindrome(int num)
{
    int res, separate;
    for (int i = num; i > 0; i = i / 10)
    {
        res = i % 10;
        separate = (separate * 10) + res;
    }
    if (separate == num)
    {
        return true;
    }
    return false;
}