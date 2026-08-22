#include <iostream>
using namespace std;

int main() {
    string expression = "23+4*";

    int stack[100];
    int top = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if (ch >= '0' && ch <= '9') {
            stack[++top] = ch - '0';
        }
        else {
            int second = stack[top--];
            int first = stack[top--];

            if (ch == '+') {
                stack[++top] = first + second;
            }
            else if (ch == '-') {
                stack[++top] = first - second;
            }
            else if (ch == '*') {
                stack[++top] = first * second;
            }
            else if (ch == '/') {
                stack[++top] = first / second;
            }
        }
    }

    cout << "Result: " << stack[top] << endl;

    return 0;
}