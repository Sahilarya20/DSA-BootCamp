#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N = 1e5 + 2;
vector<pair<int,int> > adj[N];

int main(){
    
    int n,m;
    cin>>n>>m;
    lp(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
   vi key(n);
   vi parent(n);
   vi mst(n);

   lp(i,0,n){
       key[i]=INT_MAX;
       parent[i]=-1;
       mst[i]=false;
   }
   key[0]=0;
   parent[0]=0;
     for (int i = 0; i < n; i++) 
        key[i] = INT_MAX, mst[i] = false; 
  

    key[0] = 0; 
    // parent[0] = -1; 
    int ansWeight = 0;
    for (int count = 0; count < n- 1; count++)
    { 
        
        int mini = INT_MAX, u; 
  
        for (int v = 0; v < n; v++) 
            if (mst[v] == false && key[v] < mini) 
                mini = key[v], u = v; 
                
        mst[u] = true; 
        
        for (auto it : adj[u]) {
            int v = it.first;
            int weight = it.second;
            if (mst[v] == false && weight < key[v]) 
                parent[v] = u, key[v] = weight; 
        }
            
    } 
    
    
    for (int i = 1; i < n; i++) 
        cout << parent[i] << " - " << i <<" \n"; 
        
    return 0;
}