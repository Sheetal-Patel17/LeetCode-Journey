#include <iostream>
using namespace std;

void generateSubsets(int arr[], int n, int index, int result[], int size) {

    if (index == n) {
        cout << "{ ";

        for (int i = 0; i < size; i++)
            cout << result[i] << " ";

        cout << "}" << endl;

        return;
    }

    // Exclude current element
    generateSubsets(arr, n, index + 1, result, size);

    // Include current element
    result[size] = arr[index];

    generateSubsets(arr, n, index + 1, result, size + 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int result[10];

    cout << "All Subsets:" << endl;

    generateSubsets(arr, 3, 0, result, 0);

    return 0;
}
