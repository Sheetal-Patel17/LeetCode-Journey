#include <iostream>
#include <queue>
using namespace std;

char firstNonRepeating(string str) {
    int frequency[26] = {0};
    queue<char> q;

    for (int i = 0; i < str.length(); i++) {
        frequency[str[i] - 'a']++;
        q.push(str[i]);

        while (!q.empty() && frequency[q.front() - 'a'] > 1) {
            q.pop();
        }
    }

    if (q.empty()) {
        return '-';
    }

    return q.front();
}

int main() {
    string str = "aabbc";

    cout << "First Non-Repeating Character: "
         << firstNonRepeating(str) << endl;

    return 0;
}