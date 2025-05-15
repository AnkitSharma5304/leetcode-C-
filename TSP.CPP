#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits> // For INT_MAX
using namespace std;

// Node structure to represent a state in the Branch and Bound tree
struct Node {
    vector<int> path; // Path so far
    int cost;         // Cost of the path so far
    int bound;        // Lower bound of the cost

    // Compare nodes based on their bound (for priority queue)
    bool operator<(const Node &other) const {
        return bound > other.bound; // Min-heap (smaller bound is prioritized)
    }
};

// Function to calculate the bound for a given path
int calculateBound(const vector<int> &path, const vector<vector<int>> &costMatrix) {
    int n = costMatrix.size();
    int bound = 0;
    vector<bool> visited(n, false);

    // Mark all cities in the current path as visited
    for (int city : path) {
        visited[city] = true;
    }

    // Add minimum outgoing cost for all unvisited cities
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int minCost = INT_MAX;
            for (int j = 0; j < n; ++j) {
                if (!visited[j] && costMatrix[i][j] < minCost) {
                    minCost = costMatrix[i][j];
                }
            }
            bound += minCost;
        }
    }

    return bound;
}

// Branch and Bound algorithm for the Traveling Salesperson Problem
pair<vector<int>, int> branchAndBoundTSP(const vector<vector<int>> &costMatrix) {
    int n = costMatrix.size();
    priority_queue<Node> pq; // Min-heap for Best-First Search
    int bestCost = INT_MAX;
    vector<int> bestPath;

    // Initial node
    Node root;
    root.path = {0}; // Start from city 0
    root.cost = 0;
    root.bound = calculateBound(root.path, costMatrix);
    pq.push(root);

    // Process the priority queue
    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        // Prune if the bound is worse than the best cost found so far
        if (current.bound >= bestCost) {
            continue;
        }

        // Explore all possible next cities
        for (int nextCity = 0; nextCity < n; ++nextCity) {
            if (find(current.path.begin(), current.path.end(), nextCity) == current.path.end()) {
                Node child;
                child.path = current.path;
                child.path.push_back(nextCity);
                child.cost = current.cost + costMatrix[current.path.back()][nextCity];

                if (child.path.size() == n) {
                    // Complete path: return to the starting city
                    child.cost += costMatrix[nextCity][0];
                    if (child.cost < bestCost) {
                        bestCost = child.cost;
                        bestPath = child.path;
                        bestPath.push_back(0); // Add the starting city to complete the loop
                    }
                } else {
                    child.bound = child.cost + calculateBound(child.path, costMatrix);
                    if (child.bound < bestCost) {
                        pq.push(child);
                    }
                }
            }
        }
    }

    return {bestPath, bestCost};
}

// Main function to test the algorithm
int main() {
    vector<vector<int>> costMatrix = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    pair<vector<int>, int> result = branchAndBoundTSP(costMatrix);

    cout << "Optimal Path: ";
    for (int city : result.first) {
        cout << city << " ";
    }
    cout << "\nTotal Cost: " << result.second << endl;

    return 0;
}
