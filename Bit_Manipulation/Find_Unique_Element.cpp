#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int result = 0;

    cout << "Enter the elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        result = result ^ value;
    }

    cout << "Unique element: " << result;

    return 0;
}

// Practice note: XOR works for finding a unique element because x ^ x becomes zero and x ^ 0 remains x.
