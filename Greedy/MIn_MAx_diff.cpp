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
    int n;cin>>n;
    vector<int> a(n);
    lp(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long mn=0,mx=0;
    lp(i,0,n/2){
        mx=mx+(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<"max diff:-"<<mx<<" "<<"min diff:-"<<mn;

    return 0;
}