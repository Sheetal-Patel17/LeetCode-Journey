#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<
        int,
        deque<int>,
        greater<int>
    > pq;

    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(6);

    int totalCost = 0;

    while (pq.size() > 1) {

        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        int cost = first + second;

        totalCost += cost;

        pq.push(cost);
    }

    cout << "Minimum Cost to Connect Ropes: "
         << totalCost;

    return 0;
}
