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
// ugly Numbers:- 0 1 2 3 4 5 6 8 9 10 12
int main(){
    int n;
    cin>>n;
    int C2=0,C3=0,C5=0;
    vi dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=min({2*dp[C2],3*dp[C3],5*dp[C5]});
        if(2*dp[C2]==dp[i])C2++;
        if(3*dp[C3]==dp[i])C3++;
        if(5*dp[C5]==dp[i])C5++;
    }
    cout<<dp[n-1];
    return 0;
}