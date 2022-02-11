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
int lcs(int i,int j,int k,vi &a,vi &b){
    if(i>=a.size() or j>=b.size()) return 0;
    int c1=0,c2=0,c3=0;
    if(a[i]==b[j])
    c1=1+ lcs(i+1,j+1,k,a,b);
    if(k>0)
    c2=1+lcs(i+1,j+1,k-1,a,b);
    c3=max(lcs(i+1,j,k,a,b),lcs(i,j+1,k,a,b));

return max({c1,c2,c3});
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    // 5 5 1
    // 1 2 3 4 5
    // 5 3 1 4 2
    vi a(n),b(m);
    lp(i,0,n)cin>>a[i];
    lp(i,0,m)cin>>b[i];
    cout<<lcs(0,0,k,a,b);
    return 0;
}