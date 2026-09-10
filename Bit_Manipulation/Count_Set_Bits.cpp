#include <iostream>
using namespace std;

int main() {
    int n = 13;
    int count = 0;

    while (n > 0) {
        count += n & 1;
        n = n >> 1;
    }

    cout << "Number of Set Bits: " << count;

    return 0;
}
