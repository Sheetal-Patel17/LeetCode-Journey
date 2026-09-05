#include <iostream>
using namespace std;

void dfs(int graph[6][6], bool visited[], int node) {
    visited[node] = true;

    for (int i = 0; i < 6; i++) {
        if (graph[node][i] == 1 && !visited[i])
            dfs(graph, visited, i);
    }
}

int main() {
    int graph[6][6] = {0};

    graph[0][1] = graph[1][0] = 1;
    graph[1][2] = graph[2][1] = 1;

    graph[3][4] = graph[4][3] = 1;

    bool visited[6] = {false};
    int components = 0;

    for (int i = 0; i < 6; i++) {
        if (!visited[i]) {
            components++;
            dfs(graph, visited, i);
        }
    }

    cout << "Connected Components: " << components;

    return 0;
}
