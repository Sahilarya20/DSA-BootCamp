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
const int N=1e5+2;
int dp[N];
// .......................MEMOIZE
int lis(vi &a,int n){
    if(dp[n]!=-1)return dp[n];   //MEMOIZE
    dp[n]=1;
    lp(i,0,n){
        if(a[n]>a[i])
        dp[n]=max(dp[n],1+lis(a,i));
    }
    return dp[n];

}

int main(){
    int n;
    cin>>n;
    // 9
    // 10 22 9 33 21 50 52 60 80
    vi a(n);
    // lp(i,0,n){
    //     dp[i]=-1;
    // }
    lp(i,0,n){
        cin>>a[i];
    }
    // cout<<lis(a,n-1);


    //.................TABULATION
    vi dpp(n,1); //Initialize every element to 1 because every single element is LIS

    int ans=0;
    lp(i,0,n){
        lp(j,0,i){
            if(a[i]>a[j])
            dpp[i]=max(dpp[i],1+dpp[j]);
        }
        ans=max(ans,dpp[i]);
    }
    cout<<ans;


    
    return 0;
}