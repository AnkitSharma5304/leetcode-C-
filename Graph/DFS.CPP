#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
void dfs(int vertex)
{
    // take action on the vertex after entering the vertex
    cout << vertex << endl;
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "par" << vertex << " ,child" << child << endl;
        if (vis[child])
            continue;
        // take action on child before entering the child node
        dfs(child);
        // take action on the child after exiting child node
    }
    // take action on the vertex before exiting the vertex
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}