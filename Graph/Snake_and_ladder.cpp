#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<string>
#include<climits>
#include<algorithm>
#include<queue>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define mp map<int,vector<int> >

int main(){
    int ladder,snakes;
    cin>>ladder;
    map<int,int> lad;
    map<int,int> snak;
    lp(i,0,ladder){
        int u,v;
        cin>>u>>v;
        /*
        2
        3 90 
        56 76
        3
        99 10
        30 20
        20 5
        */
        lad[u]=v;  
    }
    cin>>snakes;
    lp(i,0,snakes){
        int u,v;
        cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int> q;
    q.push(1);
    bool found=false;
    vi vis(101,0);
    vis[1]=1;
     while(!q.empty() && !found){
         int sz=q.size();
         while(sz--){
             int t=q.front();
             q.pop();
             lp(die,1,7){
                 if(t+die==100)found=true;
                if(t+die<=100 && lad[t+die] && !vis[lad[t+die]]){
                    vis[lad[t+die]]=true;
                    if(lad[t+die]==100)found=true;
                    q.push(lad[t+die]);
                }
                else if(t+die<=100 && snak[t+die] && !vis[snak[t+die]]){
                     vis[snak[t+die]]=true;
                    if(snak[t+die]==100)found=true;
                    q.push(snak[t+die]);
                }
                else if(t+die<=100 && !snak[t+die] && !vis[t+die] &&!lad[t+die] ){
                    vis[t+die]=true;
                    q.push(t+die);
                }

             }
         }
        moves++;
     }
     if(found)cout<<moves;
     else
     cout<<-1;




    
    return 0;
}