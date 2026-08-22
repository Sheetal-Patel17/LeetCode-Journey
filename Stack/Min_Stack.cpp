#include <iostream>
using namespace std;

class MinStack {
private:
    int stack[100];
    int minStack[100];

    int top;
    int minTop;

public:
    MinStack() {
        top = -1;
        minTop = -1;
    }

    void push(int value) {
        stack[++top] = value;

        if (minTop == -1 || value <= minStack[minTop]) {
            minStack[++minTop] = value;
        }
    }

    void pop() {
        if (top == -1) {
            return;
        }

        if (stack[top] == minStack[minTop]) {
            minTop--;
        }

        top--;
    }

    int getMin() {
        return minStack[minTop];
    }
};

int main() {
    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Minimum: " << s.getMin() << endl;

    s.pop();

    cout << "Minimum after pop: " << s.getMin() << endl;

    return 0;
}