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

int main(){
    int n;
    cin>>n;
//     8
// 1 11 2 10 4 5 2 1
    vi a(n);
    lp(i,0,n)cin>>a[i];
    vi f(n,1),b(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j])
            f[i]=max(f[i],f[j]+1);
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(a[i]>a[j])
            b[i]=max(b[i],b[j]+1);
        }
    }
    int ans=0; 
    lp(i,0,n){
        ans=max(ans,f[i]+b[i]-1);
    }
    cout<<ans;
    return 0;
}