#include <iostream>
using namespace std;

bool dfs(int graph[5][5], bool visited[], int node, int parent) {
    visited[node] = true;

    for (int i = 0; i < 5; i++) {
        if (graph[node][i] == 1) {
            if (!visited[i]) {
                if (dfs(graph, visited, i, node))
                    return true;
            }
            else if (i != parent) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int graph[5][5] = {0};

    graph[0][1] = graph[1][0] = 1;
    graph[1][2] = graph[2][1] = 1;
    graph[2][0] = graph[0][2] = 1;

    bool visited[5] = {false};

    bool cycle = false;

    for (int i = 0; i < 5; i++) {
        if (!visited[i] && dfs(graph, visited, i, -1)) {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Cycle Exists";
    else
        cout << "No Cycle";

    return 0;
}
