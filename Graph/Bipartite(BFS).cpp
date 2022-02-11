#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>
const int N = 1e5 + 2;
vi adj[N];
bool bipartiteBFS(int node, vi adj[], vi &color)
{
    queue<int> q;
    q.push(node);
    color[node] = 1;
    while (!q.empty())
    {
        int Node = q.front();
        q.pop();
        for (auto &it : adj[Node])
        {
            if (color[it] == -1)
            {
                color[it] = 1 - color[Node];
                q.push(it);
            }
            else if (color[it] == color[Node])
                return false;
        }
    }
    return true;
}
bool checkbipartite(vi adj[], int n)
{
    vi color(n, -1);
    lp(i, 0, n)
    {
        if (color[i] == -1)
        {
            if (!bipartiteBFS(i, adj, color))
                return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    lp(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (checkbipartite(adj, n))
        cout << "yes it is";
    else
        cout << "NO its not";

    return 0;
}