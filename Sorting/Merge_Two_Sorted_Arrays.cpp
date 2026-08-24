#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = 3;
    int n2 = 3;

    int result[6];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    while (i < n1)
        result[k++] = arr1[i++];

    while (j < n2)
        result[k++] = arr2[j++];

    cout << "Merged Array: ";

    for (int x = 0; x < k; x++)
        cout << result[x] << " ";

    cout << endl;

    return 0;
}
