#include <iostream>
using namespace std;

int sumNaturalNumbers(int n) {
    if (n == 0)
        return 0;

    return n + sumNaturalNumbers(n - 1);
}

int main() {
    int n = 5;

    cout << "Sum: " << sumNaturalNumbers(n);

    return 0;
}
