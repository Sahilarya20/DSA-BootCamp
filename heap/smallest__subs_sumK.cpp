#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>

int main(){

    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    priority_queue<int,vi> pq;
    rep(i,0,n){
        pq.push(a[i]);
    }
    int sum=0;
    int cnt=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
        cnt++;
        if(sum>=k)
        break;

    }
    if(sum<k)cout<<"-1";
    else 
    cout<<cnt;
    
    return 0;
}