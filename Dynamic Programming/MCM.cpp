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
const int mod=1e9+7;

int MCM(int i,int j,vi &a,vector<vi> &dp)
{
    if(i==j)return 0;


    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j]=mod;

    for(int k=i;k<j;k++){
        dp[i][j]=min(dp[i][j], MCM(i,k,a,dp)+MCM(k+1,j,a,dp)+a[i-1]*a[k]*a[j]);

    }
    return dp[i][j];
}
int main(){
    
    int n;
    cin>>n;
    vi a(n);
    lp(i,0,n)cin>>a[i];
    vector<vi> dp(n,vi(n,-1));
    cout<<MCM(1,n-1,a,dp);
    return 0;
}