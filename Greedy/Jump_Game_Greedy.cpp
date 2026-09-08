#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = 5;

    int farthest = 0;

    for (int i = 0; i < n; i++) {
        if (i > farthest)
            break;

        farthest = max(farthest, i + arr[i]);
    }

    if (farthest >= n - 1)
        cout << "Can Reach End";
    else
        cout << "Cannot Reach End";

    return 0;
}
