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
#define int long long
const int mod=1e9+7;


// iterative version/

int power(int a,int n){
    a%=mod;
    int ans=1;
    while(n>0){
        if(n&1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        n=n>>1;

    }
    return ans;

}
int powerRecursive(int a,int n){
     if(n==0)return 1;

     int p=(powerRecursive(a,n/2))%mod;
     if(n&1){
         return ((p*p%mod)*a)%mod;
     }
     else return (p*p)%mod;
}


signed main(){
    
    int a,n;
    cin>>a>>n;
    // cout<<power(a,n);
    a%=mod;
    cout<<powerRecursive(a,n);

    return 0;
}