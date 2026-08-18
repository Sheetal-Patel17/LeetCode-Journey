#include <iostream>
#include <queue>
using namespace std;

class RecentCounter {
private:
    queue<int> q;

public:
    int ping(int t) {
        q.push(t);

        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }

        return q.size();
    }
};

int main() {
    RecentCounter counter;

    cout << counter.ping(1) << endl;
    cout << counter.ping(100) << endl;
    cout << counter.ping(3001) << endl;
    cout << counter.ping(3002) << endl;

    return 0;
}