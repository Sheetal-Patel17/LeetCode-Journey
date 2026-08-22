#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = 5;
    int n2 = 5;

    unordered_set<int> set1;

    for (int i = 0; i < n1; i++)
        set1.insert(arr1[i]);

    cout << "Intersection: ";

    unordered_set<int> printed;

    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end() &&
            printed.find(arr2[i]) == printed.end()) {

            cout << arr2[i] << " ";
            printed.insert(arr2[i]);
        }
    }

    cout << endl;

    return 0;
}
