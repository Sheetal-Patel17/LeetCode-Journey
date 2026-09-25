#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << "Power of 2";
    else
        cout << "Not a power of 2";

    return 0;
}

// Practice note: a positive power of two has exactly one set bit, so n > 0 and (n & (n - 1)) == 0 is a useful test.
