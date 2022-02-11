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

void dfs(int node)
{
    vis[node]=1;
    cout<<node<<" ";
    for(auto &x:adj[node]){
        if(vis[x]==0){
            dfs(x);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    lp(i,0,n){
        vis[i]=0;
    }
    lp(i,0,m){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
     
    dfs(1);
    
    return 0;
}