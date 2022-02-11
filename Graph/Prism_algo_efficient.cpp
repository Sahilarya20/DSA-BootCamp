#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<queue>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N=1e5+2;
vector<pair<int,int> > adj[N];

int main(){
    int n,m;
    cin>>n>>m;
    lp(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        // 5 6
        // 0 1 2
        // 0 3 6
        // 3 1 8
        // 1 4 5
        // 1 2 3
        // 4 2 7
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vi key(n);
    vi parent(n);
    vi mst(n);

    for (int i = 0; i < n; i++) 
        key[i] = INT_MAX, mst[i] = false; 

    priority_queue<pii,vector<pii> ,greater<pii> >pq;
    key[0]=0;
    parent[0]=-1;

    pq.push({0,0});

    for(int count=0;count<n;count++){
        int u=pq.top().second;
        pq.pop();
         mst[u]=true;

         for(auto it:adj[u]){
             int v=it.first;
             int weight=it.second;
            if(mst[v]==false && weight<key[v]){
                parent[v]=u;
                key[v]=weight;
                pq.push({key[v],v});
            }
         }
    }
     for (int i = 1; i < n; i++) 
        cout << parent[i] << " - " << i <<" \n"; 



    return 0;
}