#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N=1e5+2;
vi adj[N];

void dfs(int node,stack<int> &st,vi &vis,vi adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,st,vis,adj);
        }
    }
    st.push(node);
}
void revDfs(int node, vector<int> &vis, vector<int> transpose[]) {
    cout << node << " "; 
    vis[node] = 1; 
    for(auto it: transpose[node]) {
        if(!vis[it]) {
            revDfs(it, vis, transpose); 
        }
    }
}

int main()
{   
    int n,m;
    cin>>n>>m;
    lp(i,0,m){
        int u,v;
        /*
        5 5 
        0 1 
        1 2 
        2 0 
        1 3 
        3 4 
        */
        cin>>u>>v;
        adj[u].push_back(v);
    }

    // TOPO sort
    stack<int> st;
    vi vis(n,0);
    lp(i,0,n){
        if(!vis[i]){
            dfs(i,st,vis,adj);
    }
    }
    
    // TRANSPOSE
    vi transpose[N];
    lp(i,0,n){
        vis[i]=0;
        for(auto it:adj[i]){
            transpose[it].push_back(i);
        }
    }
    while (!st.empty()){
        int node=st.top();
        st.pop();
        if(!vis[node]){
            cout<<"SCC:";
            revDfs(node,vis,transpose);
            cout<<endl;
        }
    }
    
    

    return 0;
}