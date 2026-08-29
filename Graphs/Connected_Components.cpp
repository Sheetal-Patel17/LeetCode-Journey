#include <iostream>
using namespace std;

int graph[6][6] =
{
    {0, 1, 0, 0, 0, 0},
    {1, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0}
};

int visited[6] = {0};

void DFS(int node)
{
    visited[node] = 1;

    for (int i = 0; i < 6; i++)
    {
        if (graph[node][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int components = 0;

    for (int i = 0; i < 6; i++)
    {
        if (visited[i] == 0)
        {
            DFS(i);
            components++;
        }
    }

    cout << "Connected Components: " << components;

    return 0;
}