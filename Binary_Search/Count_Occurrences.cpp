#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            answer = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return answer;
}

int lastOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            answer = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return answer;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};

    int n = 7;
    int target = 2;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if (first == -1) {
        cout << "Element not found" << endl;
    }
    else {
        int count = last - first + 1;

        cout << "Count of " << target << ": " << count << endl;
    }

    return 0;
}