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

int  solve(int i,int j,vi &a,vector<vi> &dp){
    if(i==j)return a[i];
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int l=a[i]+min(solve(i+2,j,a,dp),solve(i+1,j-1,a,dp));
    int r=a[j]+min(solve(i,j-2,a,dp),solve(i+1,j-1,a,dp));

    return dp[i][j]= max(l,r);
}
int main(){

    int n;
    cin>>n;
    vi a(n);
    vector<vi> dp(100,vi(100,-1));

    for(auto&i:a){
        cin>>i;
    }
    cout<<solve(0,n-1,a,dp);
    return 0;
}