	#include <iostream>
using namespace std;

int main()
{
    int graph[5][5] =
    {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };

    int visited[5] = {0};
    int queue[5];

    int front = 0;
    int rear = 0;

    queue[rear++] = 0;
    visited[0] = 1;

    cout << "BFS Traversal: ";

    while (front < rear)
    {
        int node = queue[front++];

        cout << node << " ";

        for (int i = 0; i < 5; i++)
        {
            if (graph[node][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}