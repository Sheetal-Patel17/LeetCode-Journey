#include <iostream>
using namespace std;

int main() {
    int arr[] = {50, 30, 40, 10, 20};
    int n = 5;

    cout << "Heap Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "For index i:" << endl;
    cout << "Left Child = 2*i + 1" << endl;
    cout << "Right Child = 2*i + 2" << endl;
    cout << "Parent = (i-1)/2" << endl;

    return 0;
}
