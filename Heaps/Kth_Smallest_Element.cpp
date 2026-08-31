#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 40, 20, 50, 30, 70, 60};
    int n = 7;
    int k = 3;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Kth Smallest Element: " << arr[k - 1];

    return 0;
}
