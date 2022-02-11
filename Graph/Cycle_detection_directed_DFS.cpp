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
vi adj[N];
bool checkcycled(int node,vi adj[],vi &vis,vi &dfsvis){
    vis[node]=1;
    dfsvis[node]=1;
    for(auto it:adj[node]){
        if(vis[it]==0 && checkcycled(it,adj,vis,dfsvis))
        return true;
        else if(dfsvis[it])
        return true;
    }
    dfsvis[node]=0;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    lp(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
       
    }
    vi vis(n+1,0);
    vi dfsvis(n+1,0);
    // int vis[n];
    // int dfsvis[n];
    // memset(vis,0,sizeof(vis));
    // memset(dfsvis,0,sizeof(dfsvis));
    bool check=false;
    lp(i,0,n){
        if(vis[i]==0 ){
        if( checkcycled(i,adj,vis,dfsvis))
        check =true;
        }
    }
   if(check==true){
        cout<<"cycle present";
    }
    else 
    cout<<"no cycle";

    return 0;
}