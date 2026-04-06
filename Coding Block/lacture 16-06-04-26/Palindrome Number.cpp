#include <iostream>
using namespace std;

int main()
{
    int num, digit, rev = 0, rem;
    cout << "Enter the number";
    cin >> num;
    digit = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (digit == rev)
    {
        cout << "palindrom number hai ";
    }
    else
    {
        cout << "palindrom number nahi hai";
    }

    return 0;
}