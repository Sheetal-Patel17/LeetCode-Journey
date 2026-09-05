#include <iostream>
using namespace std;

bool dfs(int graph[4][4], bool visited[], bool path[], int node) {
    visited[node] = true;
    path[node] = true;

    for (int i = 0; i < 4; i++) {
        if (graph[node][i] == 1) {
            if (!visited[i]) {
                if (dfs(graph, visited, path, i))
                    return true;
            }
            else if (path[i]) {
                return true;
            }
        }
    }

    path[node] = false;

    return false;
}

int main() {
    int graph[4][4] = {0};

    graph[0][1] = 1;
    graph[1][2] = 1;
    graph[2][3] = 1;
    graph[3][1] = 1;

    bool visited[4] = {false};
    bool path[4] = {false};

    bool cycle = false;

    for (int i = 0; i < 4; i++) {
        if (!visited[i] && dfs(graph, visited, path, i)) {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Directed Cycle Exists";
    else
        cout << "No Directed Cycle";

    return 0;
}
