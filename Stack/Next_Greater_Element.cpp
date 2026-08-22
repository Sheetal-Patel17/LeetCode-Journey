#include <iostream>
using namespace std;

int main() {
    int arr[4] = {4, 5, 2, 10};
    int result[4];

    int stack[4];
    int top = -1;

    for (int i = 3; i >= 0; i--) {

        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }

        if (top == -1) {
            result[i] = -1;
        }
        else {
            result[i] = stack[top];
        }

        stack[++top] = arr[i];
    }

    cout << "Next Greater Elements: ";

    for (int i = 0; i < 4; i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}