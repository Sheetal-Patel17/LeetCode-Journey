#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3};
    int n = 6;
    int k = 2;

    int values[100];
    int frequency[100];
    int count = 0;

    for (int i = 0; i < n; i++) {
        int found = -1;

        for (int j = 0; j < count; j++) {
            if (values[j] == arr[i]) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            values[count] = arr[i];
            frequency[count] = 1;
            count++;
        } else {
            frequency[found]++;
        }
    }

    cout << "Top " << k << " Frequent Elements: ";

    for (int x = 0; x < k; x++) {
        int maxIndex = 0;

        for (int i = 1; i < count; i++) {
            if (frequency[i] > frequency[maxIndex])
                maxIndex = i;
        }

        cout << values[maxIndex] << " ";
        frequency[maxIndex] = -1;
    }

    return 0;
}
