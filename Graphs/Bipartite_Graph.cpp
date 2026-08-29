#include <iostream>
using namespace std;

int graph[4][4] =
{
    {0, 1, 0, 1},
    {1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 0, 1, 0}
};

int color[4];

bool BFS(int start)
{
    int queue[4];

    int front = 0;
    int rear = 0;

    queue[rear++] = start;
    color[start] = 0;

    while (front < rear)
    {
        int node = queue[front++];

        for (int i = 0; i < 4; i++)
        {
            if (graph[node][i] == 1)
            {
                if (color[i] == -1)
                {
                    color[i] = 1 - color[node];
                    queue[rear++] = i;
                }
                else if (color[i] == color[node])
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    for (int i = 0; i < 4; i++)
        color[i] = -1;

    bool result = true;

    for (int i = 0; i < 4; i++)
    {
        if (color[i] == -1)
        {
            if (!BFS(i))
            {
                result = false;
                break;
            }
        }
    }

    if (result)
        cout << "Graph is Bipartite";
    else
        cout << "Graph is Not Bipartite";

    return 0;
}