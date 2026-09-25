#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int xorValue = 0;

    for (int i = 0; i <= n; i++)
    {
        xorValue = xorValue ^ i;
    }

    cout << "Enter " << n << " numbers from 0 to " << n << ":" << endl;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        xorValue = xorValue ^ value;
    }

    cout << "Missing number: " << xorValue;

    return 0;
}

// Practice note: XOR is useful here because equal values cancel each other, leaving the missing number.
