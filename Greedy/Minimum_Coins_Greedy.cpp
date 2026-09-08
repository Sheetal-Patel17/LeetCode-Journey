#include <iostream>
using namespace std;

int main() {
    int coins[] = {25, 10, 5, 1};
    int n = 4;
    int amount = 63;

    int count = 0;

    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            count++;
        }
    }

    cout << "Minimum Coins: " << count;

    return 0;
}
