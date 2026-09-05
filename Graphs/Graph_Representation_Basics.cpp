#include <iostream>
using namespace std;

int main() {
    int graph[5][5] = {0};

    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][4] = 1;
    graph[4][2] = 1;

    cout << "Adjacency Matrix:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }

    return 0;
}
