#include <iostream>
using namespace std;

void combinationSum(int arr[], int n, int index,
                    int target, int result[], int size) {

    if (target == 0) {
        cout << "{ ";

        for (int i = 0; i < size; i++)
            cout << result[i] << " ";

        cout << "}" << endl;
        return;
    }

    if (index == n || target < 0)
        return;

    result[size] = arr[index];

    combinationSum(arr, n, index,
                   target - arr[index],
                   result, size + 1);

    combinationSum(arr, n, index + 1,
                   target,
                   result, size);
}

int main() {
    int arr[] = {2, 3, 6, 7};
    int result[20];

    cout << "Combinations:" << endl;

    combinationSum(arr, 4, 0, 7, result, 0);

    return 0;
}
