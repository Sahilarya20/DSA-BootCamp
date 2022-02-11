// https://www.youtube.com/watch?v=VV19JFP6-0c&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=133
#include<vector>
#include<queue>
#include<iostream>
#define vi vector<double>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
using namespace std;

int main(){
    
    int k;cin>>k;
    vector<vector<int> > a(k);
    // INPUT
        // 3 
        // 3 1 4 6
        // 2 2 3
        // 3 5 6 7
    for(int i=0;i<k;i++){
        int size;
        cin>>size;
        a[i]=vector<int>(size);
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    vector<int> idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii> > pq;
    rep(i,0,k){
        pii p;
        p.first=a[i][0];
        p.second=i;
        pq.push(p);
    }
    vi ans;
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();

        ans.push_back(x.first);
         
         if(idx[x.second]+1<a[x.second].size()){
             pii m;
             m.first=a[x.second][idx[x.second]+1];
             m.second=x.second;
             pq.push(m);
         }
         
            idx[x.second]+=1;

    }
    rep(i,0,ans.size()){
        cout<<ans[i]<< " ";
    }
        return 0;
}