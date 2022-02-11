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
const int N=1e3+2;
int val[N],wt[N];
int knapsack(int n,int W,vector<vector<int> >&dp){
    if(W==0){
        return 0;
    }
    if(n<=0)return 0;

    if(dp[n][W]!=-1)return dp[n][W];  //memoize
    if(wt[n-1]>W)
     dp[n][W]= knapsack(n-1,W,dp);
    else
    dp[n][W]= max(knapsack(n-1,W,dp),knapsack(n-1,W-wt[n-1],dp)+val[n-1]); //memoize
    return dp[n][W];
}

int main(){
    
     int n;
     cin>>n;
    //  3
    // 15 30 45
    // 60 100 150
    // 60
    
     
     lp(i,0,n){
         cin>>wt[i];
     }
     lp(i,0,n){
         cin>>val[i];
     }
     int W;
     cin>>W;
    //  vector<vector<int> > dp(n+1,vi(W+1,-1));    //memoize
    //  cout<<knapsack(n,W,dp);

    //................TABULATION:-BOTTOM UP
    vector<vector<int> > K(n+1,vi(W+1));
    

  for(int i = 0; i <= n; i++){
       for(int j = 0; j <= W; j++){
            if (i == 0 || j == 0)
                K[i][j] = 0;
            else if(wt[i - 1] <= j)
                K[i][j] = max(val[i - 1] +
                                K[i-1 ][j - wt[i - 1]],
                                K[i - 1][j]);
            else
                K[i][j] = K[i - 1][j];
        }
    }
    cout<< K[n][W];

    return 0;
}