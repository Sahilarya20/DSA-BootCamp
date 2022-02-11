#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<queue>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int> >
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
bool vis[N];
vi adj[N];

int main(){
    int n,m;
    int cnt=0;
    cin>>n>>m;
    vi indeg(n,0);
    lp(i,0,m){
        // U-->v
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    lp(i,0,n){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
   while(!pq.empty()){
       cnt++;
       int x=pq.front();
       pq.pop();
       cout<<x<<" ";
       for(auto it:adj[x]){
           indeg[it]--;
           if(indeg[it]==0){
               pq.push(it);
           }
       }
   }
    return 0;
}