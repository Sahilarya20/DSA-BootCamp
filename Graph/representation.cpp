#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int> >
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    
    // Adjacency matrix..............................
    int n;
    int m;
    cin>>n>>m;
// INPUT
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3
   vvi adj(n+1,vi(n+1,0));
   lp(i,0,n){
       int x,y;
       cin>>x>>y;
       adj[x][y]=1;
       adj[y][x]=1;
   }
   cout<<"Adjacency Matrcix is:-"<<endl;
    lp(i,0,n){
         lp(j,0,n){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}

//  Adjacency List.................


    cin>>n>>m;
    vi adjl[1000];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    cout<<"Adjacency list:-"<<endl;
    lp(i,1,n+1){
        cout<<i<<"->";
        for(int x:adjl[i])
        cout<<x<< " ";
        cout<<endl;
    }

    
    return 0;
}