#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<queue>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
   
  int t;
  cin>>t;
  while(t--){
    int n; // NO. of stops
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i].first>>v[i].second;
    }
    int l,p;
    cin>>l>>p;
    // L -> Distance to be travelled and P=> fuel initial
    for(int i=0;i<n;i++){
      v[i].first=l-v[i].first;
    }
    sort(v.begin(),v.end());
    int ans=0;
    int currentFuel=p;
    priority_queue<int,vector<int>>pq;
    bool flag=0;
    for(int i=0;i<n;i++){
      if(currentFuel>=l) break;
      while(currentFuel<v[i].first){
        if(pq.empty()){
          flag=1;
          break;
        }
        ans++;
        currentFuel+=pq.top();
        pq.pop();
      }
      if(flag) break;
      pq.push(v[i].second);
    }
    if(flag){
      cout<<"-1"<<endl;
      continue;
    }
    while(!pq.empty() && currentFuel<1){
      currentFuel+=pq.top();
      pq.pop();
      ans++;
    }
    if(currentFuel<1){
      cout<<"-1"<<endl;
      continue;
    }
    cout<<ans<<endl;

  }
  
    return 0;
}