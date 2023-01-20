#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
    queue<int> q;
    int count;
    int n;
    int** A;
    vector<bool> visited;
public:
    Graph(int n) {
        count = 0;
        this->n = n;
        A = new int* [n];
        for (int i = 0; i < n; i++)
            A[i] = new int[n];
			
        visited.resize(n, false);
    }

    void takeInput() {
        cout << "Enter the adjacency matrix:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> A[i][j];
    }

    int DFS(int v) {
        cout << v << " ";
        visited[v] = true;
        for (int i = 0; i < n; i++)
            if (A[v][i] == 1 && !visited[i])
            {
                DFS(i);
				count++;
            }
        return count;
    }

    void BFS(int start) {
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int i = j; i < n; i++) {
                if (A[node][i] == 1 && !visited[i]) {
                    cout << i << " ";
                    visited[i] = true;
                    q.push(i);
                    count++;
                }
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes in the graph: ";
    cin >> n;
    Graph g(n);
    g.takeInput();
    int i;
    cout << "Enter the starting node for DFS: ";
    cin >> i;
    /* cout << "DFS Traversal from node " << start << ": ";
    int c = g.DFS(i); */
    cout << "BFS Traversal from node " << i << ": ";
    int c = g.BFS(i);
    cout << "\n\ncount: " << c;
    return 0;
}

