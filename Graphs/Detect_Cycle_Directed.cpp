#include <iostream>
using namespace std;

int graph[4][4] =
{
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1},
    {1, 0, 0, 0}
};

int visited[4] = {0};
int path[4] = {0};

bool DFS(int node)
{
    visited[node] = 1;
    path[node] = 1;

    for (int i = 0; i < 4; i++)
    {
        if (graph[node][i] == 1)
        {
            if (visited[i] == 0)
            {
                if (DFS(i))
                    return true;
            }
            else if (path[i] == 1)
            {
                return true;
            }
        }
    }

    path[node] = 0;

    return false;
}

int main()
{
    bool cycle = false;

    for (int i = 0; i < 4; i++)
    {
        if (visited[i] == 0)
        {
            if (DFS(i))
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