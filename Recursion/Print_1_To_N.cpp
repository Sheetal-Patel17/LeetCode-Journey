#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;

    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n = 5;

    cout << "Numbers 1 to N: ";
    printNumbers(n);

    return 0;
}
