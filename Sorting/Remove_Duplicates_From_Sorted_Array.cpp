#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "Number of unique elements: " << j + 1 << endl;

    return 0;
}
