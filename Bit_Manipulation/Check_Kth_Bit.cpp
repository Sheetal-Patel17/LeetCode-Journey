#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position: ";
    cin >> k;

    if ((n & (1 << k)) != 0)
        cout << "K-th bit is SET";
    else
        cout << "K-th bit is NOT SET";

    return 0;
}

// Practice note: use a mask (1 << k) and AND it with the number to check whether the kth bit is set.

// Bit positions are counted starting from 0 at the rightmost bit.
