#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int left, int right) {
    if (left >= right)
        return true;

    if (arr[left] != arr[right])
        return false;

    return isPalindrome(arr, left + 1, right - 1);
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    if (isPalindrome(arr, 0, n - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
