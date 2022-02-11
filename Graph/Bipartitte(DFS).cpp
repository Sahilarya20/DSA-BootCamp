#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;
#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>
const int N = 1e5 + 2;
vi adj[N];
bool BipartiteDFS(int node, vi adj[], vi &color)
{
    if (color[node] == -1)
        color[node] = 1;
    for (auto it : adj[node])
    {
        if (color[it] == -1)
        {
            color[it] = 1 - color[node];
            if (!BipartiteDFS(it, adj, color))
            {
                return false;
            }
        }
        else if (color[it] == color[node])
            return false;
    }
    return true;
}

bool checkBipartite(vi adj[], int n)
{
    vi color(n, -1);
    lp(i, 0, n)
    {
        if (color[i] == -1)
        {
            if (!BipartiteDFS(i, adj, color))
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
    if (checkBipartite(adj, n))
        cout << "yes it is" << endl;
    else
        cout << "NO its not" << endl;
    return 0;
}