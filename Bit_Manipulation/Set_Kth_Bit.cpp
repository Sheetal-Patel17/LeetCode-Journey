#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position to set: ";
    cin >> k;

    int result = n | (1 << k);

    cout << "Number after setting K-th bit: " << result;

    return 0;
}

// Practice note: setting the kth bit uses OR with a mask: n | (1 << k).
