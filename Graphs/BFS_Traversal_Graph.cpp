#include <iostream>
using namespace std;

void bfs(int graph[5][5], int start) {
    int queue[100];
    bool visited[5] = {false};

    int front = 0;
    int rear = 0;

    queue[rear++] = start;
    visited[start] = true;

    cout << "BFS Traversal: ";

    while (front < rear) {
        int node = queue[front++];
        cout << node << " ";

        for (int i = 0; i < 5; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    int graph[5][5] = {0};

    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[2][4] = graph[4][2] = 1;

    bfs(graph, 0);

    return 0;
}
