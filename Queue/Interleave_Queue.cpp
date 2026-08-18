#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    queue<int> firstHalf;
    queue<int> secondHalf;

    int half = q.size() / 2;

    // Store first half
    for (int i = 0; i < half; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    // Store second half
    while (!q.empty()) {
        secondHalf.push(q.front());
        q.pop();
    }

    // Interleave
    while (!firstHalf.empty() && !secondHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(secondHalf.front());
        secondHalf.pop();
    }

    cout << "Interleaved Queue: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}