#include <iostream>
using namespace std;

void swapValues(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void permutations(char arr[], int left, int right) {
    if (left == right) {
        cout << arr << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        swapValues(arr[left], arr[i]);
        permutations(arr, left + 1, right);
        swapValues(arr[left], arr[i]);
    }
}

int main() {
    char arr[] = "ABC";

    cout << "Permutations:" << endl;
    permutations(arr, 0, 2);

    return 0;
}
