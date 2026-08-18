#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    stack<int> s;

    // Put first K elements into stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Put them back into queue in reverse order
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Move remaining elements to the back
    int remaining = q.size() - k;

    for (int i = 0; i < remaining; i++) {
        q.push(q.front());
        q.pop();
    }

    cout << "Queue after reversing first K elements: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}