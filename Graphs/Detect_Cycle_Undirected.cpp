#include <iostream>
using namespace std;

int graph[5][5] =
{
    {0, 1, 1, 0, 0},
    {1, 0, 1, 0, 0},
    {1, 1, 0, 1, 0},
    {0, 0, 1, 0, 1},
    {0, 0, 0, 1, 0}
};

int visited[5] = {0};

bool DFS(int node, int parent)
{
    visited[node] = 1;

    for (int i = 0; i < 5; i++)
    {
        if (graph[node][i] == 1)
        {
            if (visited[i] == 0)
            {
                if (DFS(i, node))
                    return true;
            }
            else if (i != parent)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    bool cycle = false;

    for (int i = 0; i < 5; i++)
    {
        if (visited[i] == 0)
        {
            if (DFS(i, -1))
            {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}