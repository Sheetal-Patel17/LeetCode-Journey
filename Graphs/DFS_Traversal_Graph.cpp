#include <iostream>
using namespace std;

void dfs(int graph[5][5], bool visited[], int node) {
    visited[node] = true;

    cout << node << " ";

    for (int i = 0; i < 5; i++) {
        if (graph[node][i] == 1 && !visited[i])
            dfs(graph, visited, i);
    }
}

int main() {
    int graph[5][5] = {0};

    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[2][4] = graph[4][2] = 1;

    bool visited[5] = {false};

    cout << "DFS Traversal: ";
    dfs(graph, visited, 0);

    return 0;
}
