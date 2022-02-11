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
#define ll long long

ll fPair(int n,vector<ll> &dp){

if(n<=2)dp[n]=n;

if(dp[n]!=0)return dp[n]; //memoize


return dp[n]=fPair(n-1,dp)+(n-1)*fPair(n-2,dp);  //f(n-1)if last element is single and (n-1)*f(n-2) if last element is with someone

}

int main(){
    int n;
    cin>>n;
    vector<ll> dp(n+1,0);
    cout<<fPair(n,dp);
    return 0;
}