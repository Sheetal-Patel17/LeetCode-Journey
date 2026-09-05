#include <iostream>
using namespace std;

int main() {
    const int INF = 9999;

    int graph[5][5] = {
        {0, 4, 1, INF, INF},
        {4, 0, 2, 5, INF},
        {1, 2, 0, 8, 10},
        {INF, 5, 8, 0, 2},
        {INF, INF, 10, 2, 0}
    };

    int distance[5];
    bool visited[5] = {false};

    for (int i = 0; i < 5; i++)
        distance[i] = INF;

    distance[0] = 0;

    for (int count = 0; count < 5; count++) {
        int current = -1;

        for (int i = 0; i < 5; i++) {
            if (!visited[i] &&
                (current == -1 || distance[i] < distance[current]))
                current = i;
        }

        visited[current] = true;

        for (int i = 0; i < 5; i++) {
            if (graph[current][i] != INF &&
                distance[current] + graph[current][i] < distance[i]) {
                distance[i] = distance[current] + graph[current][i];
            }
        }
    }

    cout << "Dijkstra Shortest Distances: ";

    for (int i = 0; i < 5; i++)
        cout << distance[i] << " ";

    return 0;
}
