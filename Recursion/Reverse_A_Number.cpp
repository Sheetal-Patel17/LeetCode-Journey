#include <iostream>
using namespace std;

int reverseNumber(int n, int reversed) {
    if (n == 0)
        return reversed;

    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    int n = 12345;

    cout << "Reversed Number: " << reverseNumber(n, 0);

    return 0;
}
