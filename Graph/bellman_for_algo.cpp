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
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int> > edges;
    lp(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
        /*
        6 7 
        3 2 6 
        5 3 1 
        0 1 5 
        1 5 -3 
        1 2 -2 
        3 4 -2 
        2 4 3 
        0
        */
    }
    int src;
    cin>>src;
    int inf=1e9;
    vi dist(n,inf);

    dist[src]=0;

     for(int i = 1;i<=n-1;i++) {
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
            }
        }
    }
    int flag=0;
    for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
        if(dist[u]+w<dist[v]){
            cout<<"negative cycle";
            flag=1;
            break;
        }
    }
    // if(flag==0){
    //     for(auto it:edges){
    //         cout<<it[0]<<" "<<it[1];
    //     }
    // }
     if(!flag) {
        for(int i = 0;i<n;i++) {
            cout << i << " " << dist[i] << endl;
        }
    }


    return 0;
}