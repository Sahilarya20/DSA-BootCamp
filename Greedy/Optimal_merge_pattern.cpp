#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    int n;
    cin>>n;
    vi a(n);
    lp(i,0,n)
    cin>>a[i];
    priority_queue<int,vector<int>, greater<int> > pq;
    lp(i,0,n){
        pq.push(a[i]);
    }
    int ans=0;
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        ans+=a+b;
        pq.push(a+b);
    }
    cout<<ans<<endl;
    return 0;
}