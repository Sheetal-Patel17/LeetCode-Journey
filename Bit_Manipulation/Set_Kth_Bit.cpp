#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int k = 1;

    n = n | (1 << k);

    cout << "Number after setting bit: " << n;

    return 0;
}
