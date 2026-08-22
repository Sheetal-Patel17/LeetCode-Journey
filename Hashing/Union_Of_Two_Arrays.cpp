#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4;
    int n2 = 4;

    unordered_set<int> result;

    for (int i = 0; i < n1; i++)
        result.insert(arr1[i]);

    for (int i = 0; i < n2; i++)
        result.insert(arr2[i]);

    cout << "Union: ";

    for (int x : result)
        cout << x << " ";

    cout << endl;

    return 0;
}
