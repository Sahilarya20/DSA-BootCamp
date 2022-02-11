#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define sortall(a) sort(a.begin(),a.end())
#define map map<int,vector<int> >
const int N=1e5+2;

int drank[N];
int parent[N];
void makeset(){
    lp(i,0,N){
        drank[i]=0;
        parent[i]=i;
    }
}
int findparent(int node){
    if(node==parent[node])
    return node;
    return parent[node]=findparent(parent[node]);
}
void findUnion(int u,int v){
    u=findparent(u);
    v=findparent(v);
    if(drank[u]>drank[v]){
        parent[v]=u;
    }
    else if(drank[u]<drank[v]){
        parent[u]=v;
    }
    else
    {
        parent[u]=v;
        drank[v]++;
    }
}

int main(){
    makeset();
    int n,m;
    cin>>n>>m;
    vector<vector<int> > edges;
    lp(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        // 8 9
        // 1 2 5
        // 2 3 6
        // 4 3 2
        // 1 4 9
        // 3 5 5
        // 5 6 10
        // 6 7 7
        // 7 8 1
        // 8 5 1
        edges.push_back({w,u,v});
    }
    sortall(edges);
    int cost=0;
    for(auto it:edges){
        int w=it[0];
        int u=it[1];
        int v=it[2];
        int x=findparent(u);
        int y=findparent(v);
        if(x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            cost+=w;
            findUnion(u,v);

        }
    }
    cout<<cost;
    return 0;
}  