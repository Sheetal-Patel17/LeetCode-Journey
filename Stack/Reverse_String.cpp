#include <iostream>
using namespace std;

int main() {
    string str = "HELLO";

    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    cout << "Reversed String: ";

    while (top >= 0) {
        cout << stack[top--];
    }

    cout << endl;

    return 0;
}