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
    int m;cin>>m;
    lp(i,0,m){
        int u,v;
        cin>>u>>v;
        findUnion(u,v);
    }
    if(findparent(2)!=findparent(3))cout<<"different components";
    else cout<<"same components";
    
    return 0;
}