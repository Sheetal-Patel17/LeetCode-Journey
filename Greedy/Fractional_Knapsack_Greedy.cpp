#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
    double ratio;
};

int main() {
    Item items[3] = {
        {10, 60, 6.0},
        {20, 100, 5.0},
        {30, 120, 4.0}
    };

    int capacity = 50;
    double totalValue = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (items[i].ratio < items[j].ratio) {
                Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (capacity >= items[i].weight) {
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }
        else {
            totalValue += items[i].ratio * capacity;
            break;
        }
    }

    cout << "Maximum Value: " << totalValue;

    return 0;
}
