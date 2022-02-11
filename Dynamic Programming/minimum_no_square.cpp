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
const int N=1e5+2,mod=1e9+7;
int dp[N];

int minsq(int n)
{
    if(n<=3&&n>=0){
        return n;
    }
    // int ans=mod;
    if(dp[n]!=mod){                  //memoize
        return dp[n];
    }

    for(int i=1;i*i<=n;i++){
        dp[n]=min(dp[n],1+minsq(n-i*i));   //memoize
    }
    return dp[n];
}

int main(){
    // /TOP DOWN
    for(int i=0;i<N;i++){
        dp[i]=mod;
    }
    int n;
    cin>>n;
    cout<<minsq(n);
    cout<<endl;

    // BOTTOM UP:-without reccurence relation
    vi dpp(n+1,mod);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
   for(int i=0;i*i<n;i++){
       for(int j=0;i*i+j<=n;j++){
           dp[i*i+j]=min(dp[i*i+j],1+dp[j]);
       }
   }
    cout<<dp[n];


    return 0;
}