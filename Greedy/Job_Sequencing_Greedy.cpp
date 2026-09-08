#include <iostream>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

int main() {
    Job jobs[5] = {
        {'A', 2, 100},
        {'B', 1, 19},
        {'C', 2, 27},
        {'D', 1, 25},
        {'E', 3, 15}
    };

    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (jobs[i].profit < jobs[j].profit) {
                Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    char schedule[10];
    bool used[10] = {false};

    int maxDeadline = 3;
    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int slot = jobs[i].deadline; slot >= 1; slot--) {
            if (!used[slot]) {
                used[slot] = true;
                schedule[slot] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Job Sequence: ";

    for (int i = 1; i <= maxDeadline; i++) {
        if (used[i])
            cout << schedule[i] << " ";
    }

    cout << endl;
    cout << "Maximum Profit: " << totalProfit;

    return 0;
}
