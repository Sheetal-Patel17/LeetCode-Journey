#include <iostream>
#include <map>
using namespace std;

struct Element
{
    int value;
    int frequency;
};

int main()
{
    int arr[8] = {1, 1, 1, 2, 2, 3, 3, 3};
    int n = 8;
    int k = 2;

    map<int, int> frequency;

    for (int i = 0; i < n; i++)
        frequency[arr[i]]++;

    Element elements[8];
    int count = 0;

    for (auto item : frequency)
    {
        elements[count].value = item.first;
        elements[count].frequency = item.second;
        count++;
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (elements[j].frequency < elements[j + 1].frequency)
            {
                Element temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }

    cout << "Top " << k << " Frequent Elements: ";

    for (int i = 0; i < k; i++)
        cout << elements[i].value << " ";

    return 0;
}
