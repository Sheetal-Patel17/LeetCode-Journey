#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if ((n & 1) == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}

// Practice note: checking the least significant bit with (n & 1) is the standard O(1) way to determine whether an integer is even or odd.
