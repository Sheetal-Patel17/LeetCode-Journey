#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0)
        return 0;

    return n + sumN(n - 1);
}

int main() {
    int n = 10;

    cout << "Sum of first " << n << " numbers: "
         << sumN(n);

    return 0;
}
