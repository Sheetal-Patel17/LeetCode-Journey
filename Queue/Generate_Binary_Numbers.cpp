#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n = 5;

    queue<string> q;

    q.push("1");

    cout << "Binary Numbers: ";

    for (int i = 0; i < n; i++) {
        string current = q.front();
        q.pop();

        cout << current << " ";

        q.push(current + "0");
        q.push(current + "1");
    }

    cout << endl;

    return 0;
}