#include <iostream>
using namespace std;

int main() {
    int n = 17;

    if (n & 1)
        cout << n << " is Odd";
    else
        cout << n << " is Even";

    return 0;
}
