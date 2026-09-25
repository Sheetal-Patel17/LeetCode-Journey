#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position to clear: ";
    cin >> k;

    int result = n & ~(1 << k);

    cout << "Number after clearing K-th bit: " << result;

    return 0;
}

// Practice note: clearing the kth bit can be done with n & ~(1 << k), which changes only the selected bit.

// The complemented mask preserves other bits while changing the selected bit to 0.
