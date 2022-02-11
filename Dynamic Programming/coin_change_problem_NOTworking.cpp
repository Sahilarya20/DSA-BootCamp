#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >


long long int coinChange(int idx,int a[],int sum,int n,vector<vector<int> > &DP){
     if(sum==0){
         return 1;
     }
     if(idx>=n || sum<0){
         return 0;
     }
     if(DP[idx][sum]!=-1)return DP[idx][sum];
     int left=coinChange(idx,a,sum+a[idx],n,DP);
     int right= coinChange(idx+1,a,sum,n,DP);
    return DP[idx][sum]= left+right;
    
     
}

int main(){
    
    int n;
    cin>>n;
   int a[n];
    lp(i,0,n)cin>>a[i];
    // int index=0;
    int sum;
    cin>>sum;
    vector<vector<int> > DP(n,vector<int>(sum+1,-1));  
    cout<<coinChange(0,a,sum,n,DP);
    return 0;


}