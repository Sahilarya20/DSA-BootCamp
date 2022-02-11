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
const int N=1e3+2,mod=1e9+7;



/////////////////.........MEMOIZE -TOP DOWN
int coinchange(vi &arr,int n,int x,vector<vector<int> > &dp){
    if(x==0){
        return 1;
    }
    if(x<0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][x]!=-1){     //memoize
        return dp[n][x];
    }
    dp[n][x]=coinchange(arr,n-1,x,dp)+coinchange(arr,n,x-arr[n-1],dp) ;  //memoize
    return dp[n][x];
}


int main(){
    int n;
    cin>>n;
    vi arr(n);
    lp(i,0,n){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    // vector<vector<int> > dp(n+1,vi(sum+1,-1));   //memoize
    // cout<< coinchange(arr,n,sum,dp);


    //..............ITERATIVE;-BOTTOM UP
vector<vector<int> > dp(n+1,vi(sum+1,0));  
    dp[0][0]=1;
    lp(i,1,n+1){
        lp(j,0,sum+1){
            if(j-arr[i-1]>=0)
                dp[i][j]+=dp[i][j-arr[i-1]];
            
            dp[i][j]+=dp[i-1][j];

        } 
    }
    cout<< dp[n][sum];



    return 0;
}