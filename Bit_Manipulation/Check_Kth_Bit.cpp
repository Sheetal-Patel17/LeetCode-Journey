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
