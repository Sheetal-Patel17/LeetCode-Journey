#include <iostream>
using namespace std;

int main()
{
    int graph[6][6] =
    {
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 0}
    };

    int indegree[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (graph[i][j] == 1)
                indegree[j]++;
        }
    }

    int queue[6];

    int front = 0;
    int rear = 0;

    for (int i = 0; i < 6; i++)
    {
        if (indegree[i] == 0)
            queue[rear++] = i;
    }

    cout << "Topological Sort: ";

    while (front < rear)
    {
        int node = queue[front++];

        cout << node << " ";

        for (int i = 0; i < 6; i++)
        {
            if (graph[node][i] == 1)
            {
                indegree[i]--;

                if (indegree[i] == 0)
                    queue[rear++] = i;
            }
        }
    }

    return 0;
}
