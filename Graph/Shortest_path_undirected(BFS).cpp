#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
#include<queue>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
vi adj[N];
int main(){
    int n, m,src;
    cin >> n >> m>>src;
    // INPUT:-
    // 9 11 0
    // 0 1
    // 0 3
    // 1 3
    // 1 2
    // 3 4
    // 2 6
    // 4 5
    // 5 6
    // 6 7
    // 6 8
    // 7 8
    
    lp(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi dist(n);
    lp(i,0,n)dist[i]=INT_MAX;
    queue<int> q;
    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dist[node]+1<dist[it]){
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    for(int a:dist){
        
        cout<<a<<" ";
    }
    

    return 0;
}