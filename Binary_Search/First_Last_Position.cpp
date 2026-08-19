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
    int arr[] = {5, 7, 7, 8, 8, 10};

    int n = 6;
    int target = 8;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    cout << "First position: " << first << endl;
    cout << "Last position: " << last << endl;

    return 0;
}