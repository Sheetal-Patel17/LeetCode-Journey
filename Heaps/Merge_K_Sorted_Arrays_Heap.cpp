#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 4, 7, 10},
        {2, 5, 8, 11},
        {3, 6, 9, 12}
    };

    int result[12];
    int index = 0;

    for (int value = 1; value <= 12; value++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (arr[i][j] == value)
                    result[index++] = value;
            }
        }
    }

    cout << "Merged Array: ";
    for (int i = 0; i < 12; i++)
        cout << result[i] << " ";

    return 0;
}
