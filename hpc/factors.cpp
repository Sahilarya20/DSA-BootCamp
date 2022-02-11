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
    for(int i=1;i<=n;i++){
        if(n%i==0)cout<<i<<" ";
    }
    return 0;
}