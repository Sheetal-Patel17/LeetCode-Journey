#include <iostream>
using namespace std;

int main() {
    int bills[] = {5, 5, 5, 10, 20};
    int n = 5;

    int five = 0;
    int ten = 0;

    bool possible = true;

    for (int i = 0; i < n; i++) {

        if (bills[i] == 5) {
            five++;
        }
        else if (bills[i] == 10) {
            if (five == 0) {
                possible = false;
                break;
            }

            five--;
            ten++;
        }
        else {
            if (ten > 0 && five > 0) {
                ten--;
                five--;
            }
            else if (five >= 3) {
                five -= 3;
            }
            else {
                possible = false;
                break;
            }
        }
    }

    if (possible)
        cout << "Change Can Be Given";
    else
        cout << "Change Cannot Be Given";

    return 0;
}
