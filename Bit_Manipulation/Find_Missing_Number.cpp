#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;

    int result = 0;

    for (int i = 1; i <= n; i++)
        result = result ^ i;

    for (int i = 0; i < n - 1; i++)
        result = result ^ arr[i];

    cout << "Missing Number: " << result;

    return 0;
}
