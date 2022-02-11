#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<limits.h>
#include<algorithm>
using namespace std;

// FINd topo sort->make dist(n)->               
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
vector<pair<int,int> > adj[N];

void findtopo(int i,vi &vis,stack <int> &st,vector<pair<int,int> >adj[]){
vis[i]=1;
for(auto x:adj[i]){
    if(!vis[x.first]){
        findtopo(x.first,vis,st,adj);
    }
}
st.push(i);
}
void shortestPath(int src,vector<pair<int,int> > adj[],int n){
    vi vis(n,0);
    stack<int> st;
    lp(i,0,n){
        if(vis[i]==0)
        findtopo(i,vis,st,adj);
    }
    vi dist(n);
    lp(i,0,n){
        dist[i]=INT_MAX;
    }
    dist[src]=0;
    while(!st.empty()){
        int node=st.top();
        st.pop();
        if(dist[node]!=INT_MAX){
            for(auto it:adj[node]){
                if(dist[node]+it.second<dist[it.first]){
                    dist[it.first]=dist[node]+it.second;
                }
            }
        }
    }
    lp(i,0,n){
        if(dist[i]==INT_MAX)cout<<"inf"<<endl;
        else cout<<dist[i]<<endl;
}

}
int main(){
    int n,m,srx;
// INPUT:-
// 6 7 0
// 0 1 2
// 0 4 1
// 1 2 3
// 4 2 2
// 4 5 4
// 2 3 6
// 5 3 1
    cin>>n>>m>>srx;
    lp(i,0,m){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }
    shortestPath(srx,adj,n);
    return 0;
}