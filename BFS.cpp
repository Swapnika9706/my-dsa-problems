#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;
 int adj[100][100];     // adjacency matrix
    int visited[100] = {0};
    int queue[100];        // queue
    int front = -1, rear = -1;
cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }
 int start;
    cout << "Enter starting vertex: ";
    cin >> start; // BFS
    cout << "BFS Traversal: ";
visited[start] = 1;
    queue[++rear] = start;
while (front != rear) {
        int node = queue[++front];
        cout << node << " ";  // Check all neighbors
        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
 return 0;
}
