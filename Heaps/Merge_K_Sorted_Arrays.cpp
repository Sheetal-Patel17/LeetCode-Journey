#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1, 4, 7, 10};
    int b[3] = {2, 5, 8};
    int c[3] = {3, 6, 9};

    int result[10];

    int i = 0;
    int j = 0;
    int k = 0;
    int index = 0;

    while (i < 4 || j < 3 || k < 3)
    {
        int smallest = 100000;

        if (i < 4 && a[i] < smallest)
            smallest = a[i];

        if (j < 3 && b[j] < smallest)
            smallest = b[j];

        if (k < 3 && c[k] < smallest)
            smallest = c[k];

        result[index++] = smallest;

        if (i < 4 && a[i] == smallest)
            i++;

        if (j < 3 && b[j] == smallest)
            j++;

        if (k < 3 && c[k] == smallest)
            k++;
    }

    cout << "Merged Array: ";

    for (int x = 0; x < index; x++)
        cout << result[x] << " ";

    return 0;
}
