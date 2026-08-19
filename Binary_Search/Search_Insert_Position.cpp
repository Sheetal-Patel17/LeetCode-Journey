#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 6};

    int n = 4;
    int target = 2;

    int left = 0;
    int right = n - 1;
    int answer = n;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << "Insert position: " << answer << endl;

    return 0;
}