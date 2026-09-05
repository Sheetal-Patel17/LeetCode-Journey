#include <iostream>
using namespace std;

int main() {
    int graph[6][6] = {0};
    int indegree[6] = {0};

    graph[5][2] = 1;
    graph[5][0] = 1;
    graph[4][0] = 1;
    graph[4][1] = 1;
    graph[2][3] = 1;
    graph[3][1] = 1;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (graph[i][j] == 1)
                indegree[j]++;
        }
    }

    int queue[100];
    int front = 0;
    int rear = 0;

    for (int i = 0; i < 6; i++) {
        if (indegree[i] == 0)
            queue[rear++] = i;
    }

    cout << "Topological Sort: ";

    int count = 0;

    while (front < rear) {
        int node = queue[front++];

        cout << node << " ";
        count++;

        for (int i = 0; i < 6; i++) {
            if (graph[node][i] == 1) {
                indegree[i]--;

                if (indegree[i] == 0)
                    queue[rear++] = i;
            }
        }
    }

    if (count != 6)
        cout << "\nGraph contains a cycle.";

    return 0;
}
