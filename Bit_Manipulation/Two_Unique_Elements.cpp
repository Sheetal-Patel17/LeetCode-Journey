#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int xorAll = 0;

    cout << "Enter the elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        xorAll = xorAll ^ value;
    }

    int rightmostSetBit = xorAll & (-xorAll);

    int first = 0;
    int second = 0;

    cout << "Processing elements..." << endl;

    cin.clear();
    cin.seekg(0, ios::end);

    cout << "XOR of the two unique elements: " << xorAll << endl;
    cout << "Rightmost set bit: " << rightmostSetBit << endl;

    cout << "The input should contain exactly two elements that occur once." << endl;
    cout << "Use XOR partitioning to separate the two unique elements.";

    return 0;
}

// Practice note: XOR can separate two unique values by using the lowest set bit of their XOR result as a distinguishing mask.
