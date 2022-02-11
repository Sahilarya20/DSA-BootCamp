#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
#define ll long long
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define mp map<int,vector<int> >

int main(){
    ll n;
    cin>>n;
    vi a(n);
    lp(i,0,n)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
     int x;
    cin>>x;
    int ans=0;
    lp(i,0,n){
        ans=ans+x/a[i];
        x=x-x/a[i]*a[i];
    }
    cout<<ans<<endl;
    return 0;
}
