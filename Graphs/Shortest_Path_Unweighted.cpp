#include <iostream>
using namespace std;

void shortestPath(int graph[6][6], int start, int target) {
    int queue[100];
    int distance[6];

    bool visited[6] = {false};

    for (int i = 0; i < 6; i++)
        distance[i] = -1;

    int front = 0;
    int rear = 0;

    queue[rear++] = start;
    visited[start] = true;
    distance[start] = 0;

    while (front < rear) {
        int node = queue[front++];

        for (int i = 0; i < 6; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                distance[i] = distance[node] + 1;
                queue[rear++] = i;
            }
        }
    }

    cout << "Shortest Distance: " << distance[target];
}

int main() {
    int graph[6][6] = {0};

    graph[0][1] = graph[1][0] = 1;
    graph[1][2] = graph[2][1] = 1;
    graph[2][3] = graph[3][2] = 1;
    graph[0][4] = graph[4][0] = 1;
    graph[4][5] = graph[5][4] = 1;
    graph[5][3] = graph[3][5] = 1;

    shortestPath(graph, 0, 3);

    return 0;
}
