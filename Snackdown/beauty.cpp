#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<set>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define ll long long
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
ll n;
ll getmin(vector<ll> &v){
    ll ans1=0;
    lp(i,1,n){
        ans1+=abs(v[i]-v[n/2]);
    }
    ll ans2=0;
    lp(i,0,n-1){
        ans2+=abs(v[i]-v[(n-1)/2]);
    }
    return min(ans1,ans2);
}
void solve(){
    cin>>n;
    vector<ll> a(n,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(n==2){
        cout<<"0"<<endl;
        return;
    }
    ll ans=getmin(a);
    set<ll> s;
    lp(i,1,n-1){
        auto val=s.lower_bound(a[i]-a[0]);
        if(val!=s.end()){
            ans=min(ans,abs((*val)-(a[i]-a[0])));

        }
        if(val!=s.begin()){
            val--;
            ans=min(ans,abs((*val)-(a[i]-a[0])));
        }
        if(i<n-2)
            ans=min(ans,abs(a[n-1]+a[0]-a[i]-a[i+1]));
             s.insert(a[n-1]-a[i]);
    }
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}