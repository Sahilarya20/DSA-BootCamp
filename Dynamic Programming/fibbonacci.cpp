#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<cstring>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
long dp[10000];

long fib(int n){
    if(n==0 || n==1)
    {
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){      // memoize
        return dp[n];
    }
    return dp[n]= fib(n-1)+fib(n-2);    // memoize
}

int main(){
    double long n;
    cin>>n;
    // TOP DOWN
    memset(dp,-1,sizeof(dp));
    cout<<fib(n);
    cout<<endl;

    // BOTTOM UP

    vi dpp(n+1);
  
    dpp[0]=0;
    dpp[1]=0;
    dpp[2]=1;

   for(int i=3;i<=n;i++){
        dpp[i]=dpp[i-1]+dpp[i-2];
    }
    cout<<dpp[n]<<" ";

    return 0;
}