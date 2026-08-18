#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> input;
    stack<int> output;

public:
    MyQueue() {
    }

    void push(int x) {
        input.push(x);
    }

    int pop() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        int value = output.top();
        output.pop();

        return value;
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};