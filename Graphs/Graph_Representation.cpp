#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int graph[5][5] = {0};

    // Edges
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][4] = 1;
    graph[4][2] = 1;

    cout << "Adjacency Matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}