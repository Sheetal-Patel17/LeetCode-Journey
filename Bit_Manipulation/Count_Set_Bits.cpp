#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    cout << "Number of set bits: " << count;

    return 0;
}

// Practice note: counting set bits focuses on the binary representation and can be optimized with n & (n - 1), which removes one set bit at a time.
