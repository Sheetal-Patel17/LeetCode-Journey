#include <iostream>
using namespace std;

int main() {
    int stack[100];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack: ";

    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    cout << endl;

    cout << "Popped: " << stack[top] << endl;
    top--;

    cout << "Top after pop: " << stack[top] << endl;

    return 0;
}