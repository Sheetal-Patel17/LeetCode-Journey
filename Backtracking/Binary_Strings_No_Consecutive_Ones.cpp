#include <iostream>
using namespace std;

void generate(char result[], int index,
              int n, int previous) {

    if (index == n) {
        result[index] = '\0';
        cout << result << endl;
        return;
    }

    result[index] = '0';

    generate(result, index + 1,
             n, 0);

    if (previous == 0) {
        result[index] = '1';

        generate(result, index + 1,
                 n, 1);
    }
}

int main() {
    int n = 3;
    char result[20];

    cout << "Binary Strings:" << endl;

    generate(result, 0, n, 0);

    return 0;
}
