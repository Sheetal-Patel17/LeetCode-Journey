#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4};
    int n = 6;

    int xorAll = 0;

    for (int i = 0; i < n; i++)
        xorAll = xorAll ^ arr[i];

    int rightMostSetBit = xorAll & (-xorAll);

    int first = 0;
    int second = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] & rightMostSetBit)
            first = first ^ arr[i];
        else
            second = second ^ arr[i];
    }

    cout << "Two Unique Elements: "
         << first << " " << second;

    return 0;
}
