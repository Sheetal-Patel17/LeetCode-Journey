#include <iostream>
using namespace std;

int main()
{
    int graph[6][6] =
    {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 1, 0}
    };

    int distance[6];

    for (int i = 0; i < 6; i++)
        distance[i] = -1;

    int queue[6];

    int front = 0;
    int rear = 0;

    queue[rear++] = 0;
    distance[0] = 0;

    while (front < rear)
    {
        int node = queue[front++];

        for (int i = 0; i < 6; i++)
        {
            if (graph[node][i] == 1 && distance[i] == -1)
            {
                distance[i] = distance[node] + 1;
                queue[rear++] = i;
            }
        }
    }

    cout << "Shortest distances from node 0:\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "0 -> " << i << " = " << distance[i] << endl;
    }

    return 0;
}