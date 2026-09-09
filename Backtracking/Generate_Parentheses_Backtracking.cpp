#include <iostream>
using namespace std;

void generate(char result[], int index,
              int open, int close, int n) {

    if (index == 2 * n) {
        result[index] = '\0';
        cout << result << endl;
        return;
    }

    if (open < n) {
        result[index] = '(';
        generate(result, index + 1,
                 open + 1, close, n);
    }

    if (close < open) {
        result[index] = ')';
        generate(result, index + 1,
                 open, close + 1, n);
    }
}

int main() {
    char result[20];

    cout << "Valid Parentheses:" << endl;

    generate(result, 0, 0, 0, 3);

    return 0;
}
