#include <iostream>
using namespace std;

int main() {
    int gas[] = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};

    int n = 5;

    int totalGas = 0;
    int totalCost = 0;
    int current = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        totalGas += gas[i];
        totalCost += cost[i];

        current += gas[i] - cost[i];

        if (current < 0) {
            start = i + 1;
            current = 0;
        }
    }

    if (totalGas >= totalCost)
        cout << "Starting Station: " << start;
    else
        cout << "No Valid Starting Station";

    return 0;
}
