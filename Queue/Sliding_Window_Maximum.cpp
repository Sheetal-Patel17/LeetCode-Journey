#include <iostream>
#include <deque>
using namespace std;

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};

    int n = 8;
    int k = 3;

    deque<int> dq;

    cout << "Maximum of each window: ";

    for (int i = 0; i < n; i++) {

        // Remove elements outside the window
        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove smaller elements
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Print maximum when window is complete
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }

    cout << endl;

    return 0;
}