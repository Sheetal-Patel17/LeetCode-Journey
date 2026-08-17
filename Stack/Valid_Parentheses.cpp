#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "{[()]}";

    char stack[100];
    int top = -1;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // Opening brackets
        if (ch == '(' || ch == '[' || ch == '{') {
            top++;
            stack[top] = ch;
        }

        // Closing brackets
        else {
            if (top == -1) {
                cout << "Not Valid";
                return 0;
            }

            char last = stack[top];
            top--;

            if ((ch == ')' && last != '(') ||
                (ch == ']' && last != '[') ||
                (ch == '}' && last != '{')) {
                
                cout << "Not Valid";
                return 0;
            }
        }
    }

    if (top == -1)
        cout << "Valid";
    else
        cout << "Not Valid";

    return 0;
}