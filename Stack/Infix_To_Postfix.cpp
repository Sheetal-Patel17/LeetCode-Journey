#include <iostream>
using namespace std;

int precedence(char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    }

    if (ch == '*' || ch == '/') {
        return 2;
    }

    return 0;
}

int main() {
    string expression = "A+B*C";

    char stack[100];
    int top = -1;

    cout << "Postfix: ";

    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {

            cout << ch;
        }
        else {
            while (top >= 0 &&
                   precedence(stack[top]) >= precedence(ch)) {

                cout << stack[top--];
            }

            stack[++top] = ch;
        }
    }

    while (top >= 0) {
        cout << stack[top--];
    }

    cout << endl;

    return 0;
}