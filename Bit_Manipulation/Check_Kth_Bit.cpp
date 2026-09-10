#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int k = 1;

    if (n & (1 << k))
        cout << "Kth Bit is Set";
    else
        cout << "Kth Bit is Not Set";

    return 0;
}
