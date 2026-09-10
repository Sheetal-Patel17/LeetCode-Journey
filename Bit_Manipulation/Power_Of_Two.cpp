#include <iostream>
using namespace std;

int main() {
    int n = 16;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << n << " is a Power of Two";
    else
        cout << n << " is Not a Power of Two";

    return 0;
}
