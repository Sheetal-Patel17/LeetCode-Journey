#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arrival[] = {900, 940, 950, 1100, 1500, 1800};
    int departure[] = {910, 1200, 1120, 1130, 1900, 2000};

    int n = 6;

    sort(arrival, arrival + n);
    sort(departure, departure + n);

    int i = 0;
    int j = 0;

    int platforms = 0;
    int maximum = 0;

    while (i < n && j < n) {

        if (arrival[i] <= departure[j]) {
            platforms++;
            maximum = max(maximum, platforms);
            i++;
        }
        else {
            platforms--;
            j++;
        }
    }

    cout << "Minimum Platforms Required: " << maximum;

    return 0;
}
