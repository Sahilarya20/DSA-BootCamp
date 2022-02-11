#include<iostream>
// GFG:USING BFS:-https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include<vector>
#include<string>
#include<climits>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
vi adj[N];
bool checkcycle(int &node,int parent,vi &vis,vi adj[]){
    vis[node]=1;
    for(auto &it:adj[node]){
        if(vis[it]==0){
            if(checkcycle(it,node,vis,adj))
            return true;
        }
        else if(it!=parent)
        return true;
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    lp(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vi vis(n+1,0);
    bool check=false;
    for(int i=0;i<=n;i++){
        if(vis[i]==0){
            if(checkcycle(i,-1,vis,adj))
           check=true;
         }
    }
      if(check){
        cout<<"cycle present";
    }
    else cout<<"no cycle";

    return 0;
}
// ..........................USING BFS GFG CODE
//  bool checkcycle(int s,int v,vector<int> adj[],vector<int> &vis){
//         queue<pair<int,int> > q;
//         vis[s]=1;
//         q.push({s,-1});
//         while(!q.empty()){
//             int node=q.front().first;
//             int prev=q.front().second;
//             for(auto it:adj[node]){
//                 if(!vis[it]){
//                     vis[it]=true;
//                     q.push({it,node});
//                 }
//                 else if(prev!=it)
//                 return true;
//             }
            
//         }
//         return  false;
//     }
//   public:
//     // Function to detect cycle in an undirected graph.
    
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
        
//         vector<int> vis(V+1,0);
//         for(int i=1;i<=V;i++){
//             if(!vis[i]){
//                 if(checkcycle(i,V,adj,vis))return true;
//             }
           
//         }
//          return false;
//     }