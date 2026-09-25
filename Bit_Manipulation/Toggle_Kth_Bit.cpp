#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position to toggle: ";
    cin >> k;

    int result = n ^ (1 << k);

    cout << "Number after toggling K-th bit: " << result;

    return 0;
}

// Practice note: XOR toggles a bit because XOR with 1 changes the bit while XOR with 0 keeps it unchanged.
