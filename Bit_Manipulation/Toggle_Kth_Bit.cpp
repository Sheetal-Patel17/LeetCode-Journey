#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int k = 1;

    n = n ^ (1 << k);

    cout << "Number after toggling bit: " << n;

    return 0;
}
