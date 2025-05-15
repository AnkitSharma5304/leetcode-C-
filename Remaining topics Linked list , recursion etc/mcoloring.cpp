#include <iostream>
#include <vector>
using namespace std;

// Function to check if it's safe to color a vertex
bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
    for (int i = 0; i < n; i++) {
        // Check if there's an edge and the adjacent node has the same color
        if (graph[node][i] && color[i] == col) {
            return false;
        }
    }
    return true;
}

// Backtracking function to solve the problem
bool solve(int node, int color[], int m, int n, bool graph[101][101]) {
    // If all nodes are colored, return true
    if (node == n) {
        return true;
    }

    // Try assigning each color to the current node
    for (int i = 1; i <= m; i++) {
        if (isSafe(node, color, graph, n, i)) {
            color[node] = i; // Assign color
            if (solve(node + 1, color, m, n, graph)) {
                return true;
            }
            color[node] = 0; // Backtrack
        }
    }
    return false;
}

// Function to check if the graph can be colored with M colors
bool graphColoring(bool graph[101][101], int m, int n) {
    int color[n] = {0}; // Array to store colors of nodes
    return solve(0, color, m, n, graph);
}

// Driver code
int main() {
    int n, m; // Number of nodes and colors
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of colors: ";
    cin >> m;

    bool graph[101][101]; // Adjacency matrix
    cout << "Enter the adjacency matrix (1 for edge, 0 for no edge):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    if (graphColoring(graph, m, n)) {
        cout << "The graph can be colored with " << m << " colors.\n";
    } else {
        cout << "The graph cannot be colored with " << m << " colors.\n";
    }

    return 0;
}
