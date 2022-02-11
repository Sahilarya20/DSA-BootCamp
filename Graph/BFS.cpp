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
bool vis[N];
vi adj[N];
int main()
{
    lp(i, 0, N)
    {
        vis[i] = 0;
    }
    int n, m;
    cin >> n >> m;
    int x, y;
    lp(i, 0, n)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto &it : adj[node])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return 0;
}