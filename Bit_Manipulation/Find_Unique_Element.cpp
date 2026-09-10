#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = 7;

    int unique = 0;

    for (int i = 0; i < n; i++)
        unique = unique ^ arr[i];

    cout << "Unique Element: " << unique;

    return 0;
}
