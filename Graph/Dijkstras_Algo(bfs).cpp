#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<queue>
#include<limits.h>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
vector<pair<int,int> > adj[N];
int main(){
    int n,m,src;
    cin>>n>>m>>src;
    lp(i,0,m){
        int u,v,wt;
        cin>>u>>v>>wt;
        // 5 6 1
        // 1 2 2
        // 1 4 1
        // 2 3 4
        // 4 3 3
        // 2 5 5
        // 3 5 1
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    vi dist(n+1,INT_MAX);
    dist[src]=0;
    pq.push(make_pair(0,src));
    while(!pq.empty()){
        int pDist=pq.top().first;  //prev dist
        int pNode=pq.top().second;  //prev Node;
        
        pq.pop();
        for(auto it:adj[pNode]){
            if(dist[pNode]+it.second<dist[it.first]){
                dist[it.first]=dist[pNode]+it.second;
                pq.push(make_pair(dist[it.first],it.first));
            }
        }

    }

lp(i,1,n){
    cout<<dist[i]<<" ";
}


    return 0;
}